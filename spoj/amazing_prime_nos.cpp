// link :: https://www.spoj.com/problems/APS/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 10000002
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
 
 
ll prime[(int)1e7+5],a[(int)1e7+5];
 
void fun(){
    ll i,j;
    mem(prime);
    for(i=2;i<size1;i++){
        if(prime[i] == 0){
            prime[i] = i;
            for(j=i*i;j<size1;j+=i){
                if(prime[j] != 0){
                    continue;
                }
 
                prime[j] = i;
            }
        }
    }
//    for(i=2;i<50;i++){
//        debug(prime[i]);
//    }
    a[0] = a[1] = 0;
    for(i=2;i<size1;i++){
        a[i] = a[i-1] + prime[i];
    }
}
int main()
{
    boost1;
    boost2;
    int n,m,i,j,t,x,y,w;
    fun();
    cin>>t;
    while(t--){
        cin>>x;
        cout<<a[x]<<endl;
    }
 
    return 0;
}
