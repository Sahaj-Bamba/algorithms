#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;
pl ans,mul,temp;
ll k,n;

// void fun(int m){
// 	if(m==1){

// 	}
// 	if(m==0){
// 		return;
// 	}
// 	ans
// }
ll mod_inv(ll a){
    ll p=mod-2;
    ll ans = 1;
    while(p>0){
        if(p%2==1){
            ans*=a;
            ans%=mod;
        }
        a*=a;
        a%=mod;
        p/=2;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,f,r,x,y,z;
	ll m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n>>k>>m;
		ans.f=1;
		ans.s=n;
		m--;
		while(m>1){
			ans.f=ans.f*(2*n-1);
			ans.s=ans.s*n;
			m-=2;
			ans.f%=mod;
			ans.s%=mod;
		}
		if(m==1){
			ans.f*=(2*n+k-1);
			ans.s*=(n+k);
		}
		ans.f%=mod;
		ans.s%=mod;
		x=__gcd(ans.f,ans.s);
		r=ans.f/x*mod_inv(ans.s/x);
		r%=mod;
		cout<<r<<"\n";
	}
	return 0;
}