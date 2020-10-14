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
 
 
int dp[2005][2005];
 
int main()
{
    boost1;
    //boost2;
    int n,m,i,j,t,x,y,w;
    string str1,str2;
 
    cin>>t;
    while(t--){
        cin>>str1>>str2;
        m = str1.length();
        n = str2.length();
        mem(dp);
        for(i=0;i<=m;i++){
            dp[0][i] = i;
        }
        for(i=0;i<=n;i++){
            dp[i][0] = i;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(str2[i-1] == str1[j-1]){
                    dp[i][j] = dp[i-1][j-1];
                }else{
                    dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
                }
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}
