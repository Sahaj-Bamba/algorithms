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
	fastIO
	ll l,a,b,c,i,j,k,f,r,x,y,z,u,d;
	ll n,m,p,q,t,top;
	ll A[mx];
	cin>>n;
	m=modularExponentiation(2,n)-2;
	r=n+1;
	l=n+1;
	b=modularExponentiation(2,n);
	top=1;
	cin>>t;
	while(t--){
		cin>>a;
		if(a==2){
			cout<<m<<"\n";
		}
		else{
			cin>>c;
			m*=2;
			m%=mod;
			if(c==1){
				top*=2;
				b*=2;
				top%=mod;
				b%=mod;
				m+=r;
				m%=mod;
				r=l;
			}else if(c==2){
				top*=2;
				b*=2;
				top%=mod;
				b%=mod;
				m+=l;
				m%=mod;
				l=r;
			}else if (c==3)
			{
				l*=2;
				r*=2;
				l%=mod;
				r%=mod;
				m+=top;
				m%=mod;
				top=b;
			}else if(c==4){
				l*=2;
				r*=2;
				l%=mod;
				r%=mod;
				m+=top;
				m%=mod;
				b=top;	
			}
		}
	}

//	cout<<r<<"\n";
	return 0;
}