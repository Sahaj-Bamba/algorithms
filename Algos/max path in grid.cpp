#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF 1000000000000000

#define rep(i,n) for(i=0;i<n;i++)
#define invrep(i,n) for (i = n-1; i >=0 ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;


ll n,m,a1,a2,b1,b2;
char grid[100][100];
ll vis[100][100];
ll fun(ll a,ll b){
	ll w,x,y,z,r;
	if (a<0||a>=n)
	{
		// cout<<"hi";
		// return 1;
		return -1LL*INF;
	}
	if (b<0||b>=m)
	{
		return -1LL*INF;
	}
	if (a==a2&&b==b2)
	{
		return 0;
	}
	if (vis[a][b]==1)
	{
		return -1LL*INF;
	}
	if (grid[a][b]=='#')
	{
		return -1LL*INF;
	}
	
	//return 8;
	vis[a][b]=1;
	r=max(max(fun(a+1,b),fun(a-1,b)),max(fun(a,b+1),fun(a,b-1)));
	r++;
	// w=fun(a+1,b)+1;
	// x=fun(a-1,b)+1;
	// y=fun(a,b+1)+1;
	// z=fun(a,b-1)+1;
	// r=max(w,x);
	// r=max(r,y);
	// r=max(r,z);
	vis[a][b]=0;
	return r;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,t,x,y,z,p,q;
	// ll A[mx];
	// memset(A,-1,sizeof(A));
	cin>>t;
	while(t--){
		// cout<<"hi";
		// break;
		f=0;
		r=0;
		cin>>n>>m;
		cin>>a1>>b1>>a2>>b2;
		rep(i,n) cin>>grid[i];
		// rep(i,n) cout<<grid[i]<<"\n";
		// cout<<"\n";
		//cout<<a1<<b1<<a2<<b2;
		rep(i,10) rep(j,10) vis[i][j]=0;
		//break;
		r=fun(a1,b1);
		if(r<0){
			r=-1;
		}
		cout<<r<<"\n";
	}
	return 0;
}