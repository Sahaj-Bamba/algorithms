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

ll n,k,A[1005];
ll Dp[1005][2][20005];

ll fun(ll ind,ll flag,ll sum){
	if (k==sum-1001)
	{
    	//cout<<"hi"<<" "<<ind<<" "<<flag<<" "<<sum<<" "<<Dp[ind][flag][sum]<<" "<<n<<"\n";
		if (ind==n)
		{
			return Dp[ind][flag][sum]=1;
		}
		if(flag==1){
    		return Dp[ind][flag][sum]=1+fun(ind+1,flag,sum+A[ind])+fun(ind+1,flag,sum-A[ind]);
    	}
    	return Dp[ind][flag][sum]=1+fun(ind+1,0,sum)+fun(ind+1,1,sum+A[ind])+fun(ind+1,1,sum-A[ind]);
	}
	if (ind==n)
	{
		return 0;
	}
	if(Dp[ind][flag][sum]!=-1){
		return Dp[ind][flag][sum];
	}
	if(flag==1){
		return Dp[ind][flag][sum]=fun(ind+1,flag,sum+A[ind])+fun(ind+1,flag,sum-A[ind]);
	}
	return Dp[ind][flag][sum]=fun(ind+1,0,sum)+fun(ind+1,1,sum+A[ind])+fun(ind+1,1,sum-A[ind]);
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	cout<<"Hi";
	ll a,b,c,i,j,f,r,x,y,z;
	ll m,p,q,t;
	mem(Dp,-1);
		f=0;
		r=0;
		cin>>n>>k;
		rep(i,0,n)	cin>>A[i];
		
		cout<<fun(0,0,1001)%mod<<"\n";	
	
//	cout<<r<<"\n";
	return 0;
}