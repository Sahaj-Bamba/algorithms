#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF 1000000000000000000

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
char C[mx];
ll A[mx];
ll dp[mx][5];
char hard[5]="hard";
ll fun(ll a,ll b){
	ll ans;
	if (dp[a][b]!= INF)
	{
		return dp[a][b];
	}
	if(b==4){
		return INF-1;
	}
	if(C[a]=='\0'){
		return 0;
	}
	if (C[a]==hard[b])
	{
		ans=min(A[a]+fun(a+1,b),fun(a+1,b+1));
		dp[a][b]=ans;
		return ans;
	}
	ans=fun(a+1,b);
	return dp[a][b]=ans;
}


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z,p,q;
		rep(i,mx) rep(j,5) dp[i][j] = INF;
		f=0;
		r=0;
		cin>>n;
		cin>>C;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		
		cout<<fun(0,0)<<"\n";
	
	return 0;
}