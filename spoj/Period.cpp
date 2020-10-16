// link :: https://www.spoj.com/problems/PERIOD/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 1000005
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
 
 
int a[size1];
int main()
{
//    boost1;
//    boost2;
    string str,pat;
    int n,m,i,j,t,x,y,w,o,k=1;
    cin>>t;
 
    //debug(t);
    while(t--){
        cin>>m;
        cin>>pat;
 
 
 
        a[0] = 0;
        i = 0;
        j = 1;
       // debug(m);
       mem(a);
        while(j<m){
            if(pat[j] == pat[i]){
                a[j] = i+1;
                j++;
                i++;
            }else{
 
                if(i>0){
                    i = a[i-1];
                }else{
                    a[i] = 0;
                    j++;
                }
            }
        }
        cout<<"Test case #"<<k++<<endl;
        for(i=1;i<=m;i++){
            if(i == a[i-1]){
                continue;
            }
            if(i%(i-a[i-1]) == 0){
                if(i == i - a[i-1]){
                    continue;
                }
                cout<<i<<" "<<i/(i-a[i-1])<<endl;
            }
        }
        cout<<endl;
 
    }
    return 0;
}
 
