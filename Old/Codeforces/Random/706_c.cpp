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
		#define mx 10005

ll N;
ll A[mx];
string S[mx];
ll Dp[mx][2];

ll fun(ll idx, ll re){
	if(idx<0){
		if (S[idx+1]>S[idx+2])
		{
			return 1e15;
		}else{
			return 0;
		}
	}

	if (Dp[idx][re] != -1)
	{
		return Dp[idx][re];
	}

	if (S[idx]>S[idx+1])
	{
		return 1e15;
	}

	ll a,b;

	a = fun(idx-1,0);

	reverse(S[idx].begin(), S[idx].end());

	b = fun(idx-1,1)+ A[idx];

	reverse(S[idx].begin(), S[idx].end());

	return Dp[idx][re] = min(a,b);

}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    #else
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	mem(Dp,-1);
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
		f=0;
		r=0;
	
		cin>>n;
		rep(i,0,n)	cin>>A[i];
		rep(i,0,n)	cin>>S[i];


	a = fun(n-2,0);

	reverse(S[n-1].begin(), S[n-1].end());

	b = fun(n-2,1) + A[n-1];

	//cout<<a;

	//cout<<b;

	r = min(a,b);

	cout<<r<<"\n";	
	
	return 0;
}