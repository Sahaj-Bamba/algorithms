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
    ll n, i, j, ans;
    vector<ll> v;
    string s;
    cin>>n;
    cin>>s;
    i = j = 0;
    do{
        while(j<n && s[j] == s[i])
            j++;
        v.pb(j-i);
        i = j;
    }while(i<n);
    ans  = (n*(n-1))/2;
    for(i=0;i<v.size()-1;i++){
        ans = ans - v[i] - v[i+1] + 1;
    }
    cout<<ans<<endl;
    return 0;
}
