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

ll N,R;
ll B[mx];

ll fun(ll index,ll seta, ll setb){
	if (seta+setb < R)
	{
		return -1;
	}
	if (index==-1)
	{
		return seta + setb;
	}
	return max(fun(index-1,__gcd(seta,B[index]),setb),fun(index-1,seta,__gcd(setb,B[index])));
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
	ll A[mx];
	set<ll,greater<ll>> Set;	//	Remove greater for ascending order
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n){
			cin>>A[i];
		}
		sort(A,A+n);
		B[0]=A[0];
		j=1;
		rep(i,1,n){
			if (A[i]!=A[i-1])
			{
				B[j++]=A[i];
			}
		}
		n=j;

		r=B[n-1];
		if (n==1)
		{
			r*=2;
		}else{
			a=A[0];
			rep(i,0,n-1){
				a=__gcd(a,B[i]);
			}
			r+=a;
		}
		R=r;
		r=max(R,fun(n-3,B[n-1],B[n-2]));
		cout<<r<<"\n";	
	}

	return 0;
}