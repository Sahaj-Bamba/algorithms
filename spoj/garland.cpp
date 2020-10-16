#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug1(x,y) cout<<#x<<" :: "<<x<<"   "<<#y<<" :: "<<y<<endl;
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
#define flush       fflush(stdout)
 
int fun(vector<int> &v){
    if(v.size() == 0) return INT_MIN;
 
    int maxi = 0,cur = 0;
    for(int i=0;i<v.size();i++){
        cur += v[i];
        if(cur < 0){
            cur = 0;
        }
        maxi = max(maxi,cur);
    }
    return maxi;
}
 
int main()
{
    //boost1;
    //boost2;
//    freopen("input.txt", "r", stdin); // redirects standard input
//	freopen("output.txt", "w", stdout); // redirects standard output
 
    ll n,m,i,j,t,x,y,w,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string str;
        cin>>str;
        vector<int> v[k];
        for(i=0;i<k;i++){
            for(j=i;j<n;j += k){
                if(str[j] == '0'){
                    v[i].pb(-1);
                }else{
                    v[i].pb(1);
                }
            }
        }
        int maxi = 0;
        for(i=0;i<k;i++){
            maxi = max(maxi,fun(v[i]));
        }
        int tot = 0;
        for(auto x : str){
            tot += x - '0';
        }
        cout<<tot - maxi<<endl;
    }
 
 
    return 0;
}
