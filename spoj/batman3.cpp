// link :: https://www.spoj.com/problems/BAT3/
#include <bits/stdc++.h>
using namespace std;
#define size1 1005
 
int dp[size1][size1],a[size1],n,rom;
 
int fun(int d,int idx){
    if(idx>n){
        return 0;
    }
    if(dp[d][idx] != -1){
        return dp[d][idx];
    }
 
    int a1,a2,a3;
    a1 = a2 = a3 =0;
    a2 = fun(d,idx+1);
 
    if(a[idx]<a[d] || d == 0 || (a[idx] >= a[d] && d == rom)){
        a1 = 1 + fun(idx,idx+1);
    }
    //cout<<"a1 = "<<a1<<" a2 = "<<a2<<" a3 = "<<a3<<endl;
    return dp[d][idx] = max(a1,a2);
}
int main()
{
    int i,t;
    cin>>t;
    while(t--){
        cin>>n>>rom;
        rom++;
        memset(dp,-1,sizeof dp);
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        cout<<fun(0,1)<<endl;
       // cin>>n;
    }
 
    return 0;
}
