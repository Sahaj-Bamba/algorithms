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

ll N;

	ll A[mx];
	ll B[mx];


ll fun(ll flag,ll index, ll X, ll Y){
	if (index==N)
	{
		return 1;
	}
	if (flag==0)
	{
		return fun(1,index+1,A[index],Y) + fun(1,index+1,B[index],Y);
	}
	if (flag == 1)
	{
		if (A[index]==X||B[index]==X)
		{
			return fun(1,index+1,X,Y);
		}else{
			return fun(2,index+1,X,B[index])+fun(2,index+1,X,A[index]);
		}
	}
	if (flag == 2)
	{
		if (A[index]==X||A[index]==Y||B[index]==X||B[index]==Y)
		{
			return fun(2,index+1,X,Y);
		}else{
			return 0;
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
	ll n,m,p,q,t;

		f=0;
		r=0;
		cin>>n>>m;
		N=m;
		rep(i,0,m){
			cin>>A[i]>>B[i];
		}
		if (fun(0,0,0,0) > 0)
		{
			cout<<"YES";
		}else{
			cout<<"NO";
		}


	return 0;
}