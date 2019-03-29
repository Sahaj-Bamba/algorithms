#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1010
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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	std::vector<ll> A[mx];
	std::vector<ll> B[mx];
	cin>>n>>m;
	rep(i,0,n){
		rep(j,0,n){
			cin>>a;
			A[i+j].pb(a);
		}
	}
	rep(i,0,n){
		rep(j,0,n){
			cin>>a;
			B[i+j].pb(a);
		}
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	f=0;
	rep(i,0,n+m-2){
		rep(j,0,A[i].size()){
			if(A[i][j]!=B[i][j]){
	//			f=1;
	//			break;
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
	return 0;
}