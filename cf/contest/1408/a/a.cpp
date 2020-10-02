#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
// #define mx 1000005
#define INF LLONG_MAX

#define debug(a) cout<<"\n----------------------"<<a<<"-------------------------"

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
	#ifndef ONLINE_JUDGE
		#define mx 1005
	#else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	ll B[mx];
	ll C[mx];
	memset(A,-1,sizeof(A));
	cin>>t;
	while(t--){
		r=f=0;
		cin>>n;
		rep(i,0,n){
			cin>>A[i];
		}
		rep(i,0,n){
			cin>>B[i];
		}
		rep(i,0,n){
			cin>>C[i];
		}
		cout<<A[0]<<" ";;
		a = A[0];
		rep(i,1,n-1){
			if(A[i]==a){
				cout<<B[i];
				a = B[i];
			}else{
				cout<<A[i];
				a = A[i];
			}
			cout<<" ";
		}
		if(a!=A[n-1] && A[0]!=A[n-1]){
			cout<<A[n-1]<<" ";
		}else if(a!=B[n-1] && A[0]!=B[n-1]){
			cout<<B[n-1]<<" ";
		}else if(a!=C[n-1] && A[0]!=C[n-1]){
			cout<<C[n-1]<<" ";
		} 
		cout<<"\n";

	}

	return 0;
}