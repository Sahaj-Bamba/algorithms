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
	double a,b,c,r,x,y,z,l,ans;
	ll n,m,p,q,t,i,j,k,f;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>a>>b>>c;
		l=0.0;
		r=min(a,b);
		if(c/a+c/b>1.0)
			f=1;
		else{
			f=0;
		}
		while(r-l>0.00005){
			ans=(l+r)/2;
			z=1/h;
			z-=(1/sqrt(pow(b,2)-pow(ans,2)))
			z-=(1/sqrt(pow(a,2)-pow(ans,2)))
			if(f==1){
				z*=-1;
			}
			// z=sqrt(((pow(a,2)*(pow(a,2)+pow(ans,2))/pow(h,2))-pow(h,2)));
			// z+=sqrt(((pow(b,2)*(pow(b,2)+pow(ans,2))/pow(h,2))-pow(h,2)));
			// z-=ans;
			if(z>0){
				l=ans;
			}else{
				r=ans;
			}
		}
		cout<<ans<<"\n";
	}


	return 0;
}