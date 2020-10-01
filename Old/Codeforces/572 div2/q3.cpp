#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define INF LLONG_MAX
#define mx 100005
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
ll A[mx];
ll dp[mx][20];

ll fun(ll start, ll length){
	if (start>=N)
	{
		return 0;
	}
	if (length==0)
	{
		dp[mx][length]=0;
		return start;
	}
	ll x = fun(start,length-1) + fun(start+pow(2,length-1),length-1);
	ll y = dp[start][length-1]+dp[start+pow(2,length-1)][length-1];
	if (x>=10)
	{
		x%=10;
		y++;
	}
	dp[start][length]=y;
	return x;
}

void build(){
	rep(j,0,20){
		rep(i,0,N){
			fun(i,j);
		}
	}
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    #endif

	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	cin>>n;
	N=n;
	rep(i,0,n)	cin>>A[i];
	build();	


	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>a>>b;
		r=dp[a-1][(log(b-a+1)/log(2))(int)];
	
		cout<<r<<"\n";	
	}

	return 0;
}