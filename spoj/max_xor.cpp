#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include<bits/stdc++.h>
#define int long long
#define mp make_pair
using namespace std;
const int N=105;
//https://csacademy.com/blog/fast-fourier-transform-and-variations-of-it
//https://codeforces.com/blog/entry/71899
void fwht(vector<int>&a,int n)
{
    for(int len=2;len<=n;len<<=1)
    {
        for(int i=0;i<n;i+=len)
        {
            for(int j=0;j<(len/2);j++)
            {
                a[i+j+(len/2)] += a[i+j];
            }
        }
    }
}
void invfwht(vector<int>&a,int n)
{
    for(int len=2;len<=n;len<<=1)
    {
        for(int i=0;i<n;i+=len)
        {
            for(int j=0;j<(len/2);j++)
            {
                a[i+j+(len/2)] -= a[i+j];
            }
        }
    }
}
vector<int> convolve(vector<int>a,vector<int>b)
{
    int n=(int)a.size();
    fwht(a,n);
    fwht(b,n);
    vector<int>res(n,0);
    for(int i=0;i<n;i++)
        a[i]=(a[i]*b[i]);
    invfwht(a,n);
    for(int i=0;i<n;i++)
    {
        res[i]=min(1LL,a[i]);
    }
    return res;
}
vector<pair<int,int>>g[N];
int k,n;
vector<vector<int>> dfs(int node,int par,int parcol,vector<vector<int>>&ans)
{
    int sub=1;
    int tot=(int)(1LL<<k);
    vector<vector<int>>dp(sub,vector<int>(tot,0LL));
    dp[0][0]=1;
    for(auto e:g[node])
    {
        if(e.first==par)
            continue;
        vector<vector<int>>dpchild=dfs(e.first,node,e.second,ans);
        int childsz=(int)dpchild.size();
        vector<vector<int>>dpnew(sub+childsz,vector<int>(tot,0));
        for(int take=0;take<sub;take++)
        {
            for(int mask=0;mask<(1<<k);mask++)
                if(dp[take][mask])
                    dpnew[take][mask|(1<<e.second)]=1;
            for(int takechild=0;takechild<childsz;takechild++)
            {
                auto res=convolve(dp[take],dpchild[takechild]);
                for(int mask=0;mask<tot;mask++)
                    if(res[mask])
                        dpnew[take+takechild+1][mask]=1;
            }
        }
        dp=dpnew;
        sub += childsz;
    }
    for(int i=0;i<sub;i++)
    {
        for(int mask=0;mask<tot;mask++)
            if(dp[i][mask])
            {
                int nmask=mask;
                if(parcol!=-1)
                {
                    nmask |= (1<<parcol);
                }
                ans[i][nmask]=1;
            }
    }
    return dp;
}
void solve()
{
    cin>>n>>k;
    int mask=(1<<k);
    for(int i=0;i<n;i++)
        g[i].clear();
    for(int i=1;i<n;i++)
    {
        int x,y,c;
        cin>>x>>y>>c;
        x--;
        y--;
        c--;
        g[x].push_back(mp(y,c));
        g[y].push_back(mp(x,c));
    }
    vector<vector<int>>ans(n,vector<int>(1<<k,0));
    dfs(0,-1,-1,ans);
    for(int i=0;i<n;i++)
    {
        for(int m=0;m<(mask);m++)
        {
            if(ans[i][m])
                cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
