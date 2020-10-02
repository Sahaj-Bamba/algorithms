#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define null NULL
#define mp make_pair
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 1e17
#define si 400005
#define For(i,a,b) for(i=a;i<b;i++)
#define piv pair<int ,vector<int>>


ll powmod(ll a, ll b){ ll ans = 1; while(b){if(b&1)ans=(ans%M*a%M)%M; a=(a%M*a%M)%M; b=b>>1;}return ans;}

int main(){
    boost
    int q, h, n, a[200005], last, curr, next, ct, i;
    cin>>q;
    while(q--){
        cin>>h>>n;
        For(i,0,n){
            cin>>a[i];
        }
        ct = 0;
        i = 1;
        last = a[i]+1;
        while(i<(n-1)){
            next = a[i+1];
            if((last - next) == 2){
                i+=2;
                if(i<n)
                    last = a[i]+1;
            }
            else{
                ct++;
                i++;
                if(i<n)
                    last = a[i]+1;
            }
        }
        if((i==n-1)&&(last>2))
            ct++;
        cout<<ct<<endl;
    }
    return 0;
}
