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
char A[100005];
ll dp[100005][27];
char B[100005];
ll K=0;
ll fun(ll idx, ll chr){
	
	if (chr==26)
	{
		K=1;
		if (idx == N)
		{
			//cout<<"Hi";
			return 1;
		}
		B[idx] = A[idx];
		return fun(idx+1, chr) +1;
	}

	if (idx==N)
	{
		return -1*1000000005;
	}

	ll a,b;

	if (A[idx]-'a' == chr)
	{
		B[idx] = A[idx];
		return dp[idx][chr] = fun(idx+1,chr+1);
	}

	if (A[idx]-'a' > chr)
	{
		B[idx] = A[idx];
		return dp[idx][chr] = fun(idx+1,chr);
	}

	B[idx] = chr + 'a';
	b = fun(idx+1,chr+1) + ((A[idx] - 'a') - chr);

	return b;

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
	
	cin>>A;
	N=strlen(A);

	r = fun(0,0);

	B[N] = '\0';

	if (K==0)
	{
		cout<<"-1";
		return 0;
	}
	cout<<B;

	return 0;
}