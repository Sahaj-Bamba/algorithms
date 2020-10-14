// link :: https://www.spoj.com/problems/CPCRC1C/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 200005
#define mod 1000000007
#define vll         vector < ll >
#define vpll        vector < pair < ll ,ll> >
#define pii         pair < int,int >
#define pll         pair < ll,ll >
#define fi          first
#define se          second
#define pb(x)       push_back(x)
#define endl        "\n"
#define mem1(x)     memset(x,-1,sizeof x)
#define mem(x)      memset(x,0,sizeof x)
#define mem63(x)    memset(x,63,sizeof x)
 
ll digit[20];
ll dp[20][170];
ll fun(int tight,int idx,ll sum){
    if(idx == -1){
        return sum;
    }
    if(!tight && dp[idx][sum] != -1){
        return dp[idx][sum];
    }
 
    ll i;
    ll res = 0;
    if(tight){
        for(i=0;i<=digit[idx]-1;i++){
            res += fun(!tight,idx-1,sum+i);
        }
        res += fun(tight,idx-1,sum+digit[idx]);
    }else{
        for(i=0;i<=9;i++){
            res += fun(tight,idx-1,sum+i);
        }
    }
    if(!tight){
        dp[idx][sum] = res;
    }
    return res;
}
 
int main()
{
    boost1;
    //boost2;
    int n,m,i,j,t,x,y,w,a,b;
    cin>>b>>a;
 
    while(a!=-1){
        i = 0;
        mem(digit);
        mem1(dp);
        while(a != 0){
            digit[i++]  = a%10;
            a /= 10;
        }
 
        ll res1 = fun(1,10,0);
        i = 0;
        b--;
        mem(digit);
        mem1(dp);
        while(b != 0){
            digit[i++]  = b%10;
            b /= 10;
        }
        cout<<res1-fun(1,10,0)<<endl;
        cin>>b>>a;
    }
 
    return 0;
}
 
