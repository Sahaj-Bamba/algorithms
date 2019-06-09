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

std::vector<pl> V[mx];
ll A[mx]={0};
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	
	cin>>n;
	rep(i,0,n){
		cin>>a>>b;
		V[a].pb(mp(i+1,b));
		A[i+1]=b;
	}
	rep(i,0,n){
		if(A[i+1]==1){
			f=0;
			for(auto lop : V[i+1]){
				if(lop.s!=1){
					f=1;
					break;
				}
			}
			if(f==0){
				cout<<i<<" ";
			}
		}
	}
	// cin>>t;
	// while(t--){
	// 	f=0;
	// 	r=0;
	// 	cin>>n;
	// 	rep(i,0,n)	cin>>A[i];
	// 	sort(A,A+n);
	
	// 	cout<<r<<"\n";	
	// }

//	cout<<r<<"\n";
	return 0;
}