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
	ll res2,res1,f1,f2,res,n,m,p,q,t;
	double X,Y,Z;
	ll A[mx];
	memset(A,-1,sizeof(A));
	cin>>x>>y;
	cin>>Z;
	a=x;
	b=y;
	X=Z;
	f1=0;
	while(a&&b){
		a=floor(X*a);
		b-=a;
		if(b<0){
			f1=1;
			break;
		}
	}
	res1=max(a,b);
	a=y;
	b=x;
	X=(1-Z);
	f2=0;
	while(a&&b){
		a=floor(X*a);
		b-=a;
		if(b<0){
			f2=1;
			break;
		}
	}
	res2=max(a,b);
	if(f1==0){
		r=res2;
	}else if(f2==0){
		r=res1;
	}else{
		r=min(res2,res1);
	}

	cout<<r<<"\n";

	return 0;
}