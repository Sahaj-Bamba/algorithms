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

ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

		f=0;
		r=0;
		cin>>x>>y>>z;
		cin>>a>>b>>c;
		f=1;
		if (a>=x)
		{
			a-=x;
		}else{
			cout<<"NO\n";
			return 0;
		}
		if(a+b>=y){
			a+=b;
			a-=y;
		}else{
			cout<<"NO\n";
			return 0;
		}
		if(a+c>=z){
			cout<<"YES\n";
			return 0;
		}else{
			cout<<"NO\n";
			return 0;
		
		}

	return 0;
}