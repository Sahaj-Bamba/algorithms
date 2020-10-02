#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
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

ll N;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,d,m,p,q,t,l;
	ll A[mx];
	memset(A,-1,sizeof(A));
	a=b=c=i=d=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	cin>>A[0]>>A[1]>>A[2]>>d;

	sort(A,A+3);

	z=A[0]+2*d;

	if (A[2]>z)
	{
		r=min(abs(A[1]-(A[0]+d)),abs(A[1]-(A[2]-d)));
	}else{
		r=(z-A[2])+abs(A[1]-(A[0]+d));
	}

	f=0;
	if (A[0]>A[1]-d)
	{
		f+=abs(A[0]-(A[1]-d));
	}

	if (A[2]<A[1]+d)
	{
		f+=abs(A[2]-(A[1]+d));
	}

	cout<<min(r,f);

	return 0;
}