// link :: https://www.spoj.com/problems/LASTDIG/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
 
ll power(ll a,ll b){
    ll res = 1,temp = a;
    while(b){
        if(b&1){
            res *= temp;
        }
        temp = (temp*temp)%10;
        b = b>>1;
    }
    return res;
}
 
 
int main()
{
   // boost1;
    //boost2;
    int n,m,i,j,t,x,y,w;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<power(x,y)%10<<endl;
    }
 
    return 0;
}
 
