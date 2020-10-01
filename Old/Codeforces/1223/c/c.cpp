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

ll x,a,y,b;
#define mx 1000005
ll A[mx];
ll B[mx];


bool fun(ll xk,ll xc){
	ll i,j,k;
	ll p,q,r;
	p = (a*b)/__gcd(a,b);
	i=xk/p;
	r=0;
	r=(B[i]*(x+y))/100;
	j=xk/a;
	// j-=i;
	r+= ((B[j]-B[i])*(x))/100;
	k=xk/b;
	k-=i;
	k+=j;
	// j-=i;
	r+= ((B[k]-B[j])*(y))/100;

	if (r<xc)
	{
		return false;
	}
	return true;

}


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    #else
    #endif

	fastIO
	
	ll c,d,i,j,k,f,r,z;
	ll n,m,p,q,t,l;
	
	ll L,R,M;

	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
	
		f=0;
		r=0;
		mem(B,0);
		cin>>n;
		rep(i,1,n+1)	cin>>A[i];
		sort(A+1,A+n+1,greater<ll>());
		rep(i,1,n+1)	B[i]=B[i-1]+A[i];
		// rep(i,1,n+1)	cout<<" "<<B[i];
		// cout<<"\n";
		cin>>x>>a>>y>>b>>k;
		// cout<<k<<"\n";
		if (x<y)
		{
			swap(a,b);
			swap(x,y);
		}
		L=0;
		R=n;
		r=-1;
		
		while(L<=R){
			M=((L+R)/2);
			if (fun(M,k))
			{
				R=M-1;
				r=M;
			}else{
				L=M+1;
			}
		}

		cout<<r<<"\n";	
	}

	return 0;
}