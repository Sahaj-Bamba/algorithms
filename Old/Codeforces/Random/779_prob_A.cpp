#include <bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod 1000000007
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)
#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

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
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	
	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;
	std::map<ll, ll> M1,M2;

	rep(i,0,n){
		cin>>a;
		M1[a]++;
	}
	rep(i,0,n){
		cin>>a;
		M2[a]++;
	}
	f=0;
	rep(i,0,5){
		a=0;
		if (M1.find(i+1) != M1.end()) 
		{
			a += M1[i+1];
		}
		if (M2.find(i+1) != M2.end()) 
		{
			a += M2[i+1];
		}
		if (a%2!=0)
		{
			f=1;
			cout<<"-1";
			return 0;
		}
	}
	r=0;
	rep(i,0,5){
		a=0;
		b=0;
		if (M1.find(i+1) != M1.end()) 
		{
			a += M1[i+1];
		}
		if (M2.find(i+1) != M2.end()) 
		{
			b += M2[i+1];
		}
		r+=abs(a-b);
	}
	cout<<r/4;

	return 0;
}