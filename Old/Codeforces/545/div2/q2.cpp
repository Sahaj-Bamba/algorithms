#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 5010
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
	ll a,b,c,none,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	char ch;
	ll C[mx];
	cin>>n;
	rep(i,0,n){
		cin>>ch;
		C[i]=ch-'0';
	}
	rep(i,0,n){
		cin>>ch;
		A[i]=ch-'0';
	}
	a=b=c=none=0;
	rep(i,0,n){
		if(A[i]==C[i]){
			if(A[i]==0){
				none++;
			}else{
				b++;
			}
		}else{
			if(A[i]==1){
				a++;
			}else{
				c++;
			}
		}
	}
	
	return 0;
}