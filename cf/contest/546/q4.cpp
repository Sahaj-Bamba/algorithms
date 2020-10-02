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

	std::vector<ll> V[mx];

	ll bs(ll a,ll i){
		ll r,l,m;
		l=0;
		r=V[i].size()-1;
		while(l<=r){
			m=(l+r)/2;
			if(V[i][m]==a){
				return 1;
			}
			if(V[i][m]>a){
				r=m-1;
			}else{
				l=m+1;
			}
		}
		return 0;
	} 
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	cin>>n>>m;
	x=n;
	rep(i,0,n){
		cin>>A[i];
	}
	rep(i,0,m){
		cin>>a>>b;
		V[b].pb(a);
	}
	rep(i,0,n+1){
		sort(V[i].begin(), V[i].end());
	}
	f=1;
	while(f){
		f=0;
		invrep(i,n,1){
			if (bs(A[i-1],A[i]))
			{
				swap(A[i-1],A[i]);
				if(i==n-1){
					n--;
					continue;
				}
				f=1;
				break;
			}
		}
	}
	cout<<x-n;
	return 0;
}