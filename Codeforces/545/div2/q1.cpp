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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	// cin>>t;
	// while(t--){
	// 	f=0;
	// 	r=0;
	// 	cin>>n;
	// 	rep(i,0,n)	cin>>A[i];
	// 	sort(A,A+n);
	
	//	cout<<r<<"\n";	
	// }


	cin>>n;
	a=0;
	b=0;
	r=0;
	i=0;
	cin>>A[i];
	if(A[i]==1){
		a++;
		x=1;
	}else{
		b++;
		x=0;
	}
	f=0;
	rep(i,1,n){
		cin>>A[i];
		if(A[i]==A[i-1]){
			if(A[i]==1){
				a++;
			}else{
				b++;
			}		
		}else{
			f++;
			r=max(min(a,b),r);
			if(f%2==x){
				b=0;	
			}else{
				a=0;
			}
			// a=0;
			// b=0;
			if(A[i]==1){
				a++;
			}else{
				b++;
			}
		}
	}
			f++;
			r=max(min(a,b),r);
			if(f%2==x){
				b=0;	
			}else{
				a=0;
			}
			// a=0;
			// b=0;
			if(A[i]==1){
				a++;
			}else{
				b++;
			}
	cout<<r*2<<"\n";
	return 0;
}