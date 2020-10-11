#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
int solve(int N,int K)
{
    int ans;
    if(mp.find(100*N+K)!=mp.end())
        return mp[100*N+K];
    if(N==0)
        ans=0;
    else if(K==1)
        ans=N;
    else 
    {
        int lo=1,hi=N;
        while(lo+2<=hi) 
        {
            int x=(hi+lo)/2;
            int t1=solve(x-1,K-1);
            int t2=solve(N-x,K);
            if(t1<t2)
                lo=x;
            else if(t1>t2)
                hi=x;
            else
                hi=lo=x;
        }
        ans=1+min(max(solve(lo-1,K-1),solve(N-lo,K)),max(solve(hi-1,K-1),solve(N-hi,K)));
    }
        return mp[100*N+K]=ans;
}
int superEggDrop(int k, int n)
{        
    return solve(n,k);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<superEggDrop(n,k)<<endl;
}
