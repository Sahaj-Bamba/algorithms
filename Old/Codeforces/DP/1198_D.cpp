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
char A[55][55];
ll Dp[55][55][55][55];

ll fun(ll i,ll j,ll n,ll m){
	if (i>n||j>m)
	{
		return 0;
	}

	if(Dp[i][j][n][m] != -1){
		return Dp[i][j][n][m];
	}

	ll ans;
	ll a,b,x;
	
	if (A[i][j]=='#')
	{
		b=min(n-i,m-j)+1;
		ans = 100000;
		rep(x,0,b){
			ans=min(ans,fun(i+1+x,j,n,j+x) + fun(i,j+1+x,i+x,m) + fun(i+1+x,j+1+x,n,m) + x + 1);
		}
	}else{
		ans = fun(i+1,j,n,j) + fun(i,j+1,i,m) + fun(i+1,j+1,n,m);
	}

	return Dp[i][j][n][m] = ans;

}

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
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;

	rep(i,0,n) rep(j,0,n) cin>>A[i][j];
	
	rep(i,0,n) rep(j,0,n) rep(k,0,n) rep(a,0,n) Dp[i][j][k][a]=-1;

	r = fun(0,0,n-1,n-1);
	
	cout<<r<<"\n";
	
	return 0;
}