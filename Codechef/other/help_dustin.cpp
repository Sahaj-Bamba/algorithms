#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

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
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll exp_mul(ll b,ll p){
	ll ans = 1;
	while(p>0){
		if(p%2!=0){
			ans*=b;
			ans%=mod;
		}
		b*=b;
		b%=mod;
		p/=2;
	}
	return ans;
}

ll modularExponentiation(ll x,ll n,ll M=mod)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	freopen("../../input","r",stdin);
	freopen("../../output","w",stdout);
	#endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	char A[mx];

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		cin>>A;

		a=strlen(A);
		b=n-a;

		r=(modularExponentiation(26,b)%mod+(modularExponentiation(26,b-1)%mod*25*a)%mod)%mod;

		cout<<r<<"\n";	
	}

	return 0;
}