#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

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

ll Dp[mx]={0};
ll a,b,c;

ll fun(ll n){
	if(Dp[n]!=0){
		return Dp[n];
	}
	ll r=(((fun(n-1)*a)%mod+(2*(fun(n-2)*(b*c)%mod)%mod)%mod))%mod;
	r+=(fun(n-3)*(((b*b)%mod*b)%mod+((c*c)%mod*c)%mod)%mod)%mod;
	r%=mod;
	Dp[n]=r;
	return r;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll i,j,k,f,r,t,n,m,x,y,z,p,q,l;
	//ll A[mx];
	cin>>n>>l>>r;
	l+=3;
	r+=3;
	a=(r/3-l/3);
	b=((r-1)/3-(l-1)/3);
	c=((r-2)/3-(l-2)/3);
	
	if (l%3==0)
	{
		a++;
	}
	if ((l)%3==1)
	{
		b++;
	}
	if(l%3==2){
		c++;
	}
	// cout<<a<<b<<c<<"\n";
	a%=mod;
	b%=mod;
	c%=mod;

	Dp[1]=a;
	Dp[2]=((a*a)%mod+(2*(b*c)%mod)%mod)%mod;
	Dp[3]=((((Dp[2]*a)%mod+(2*(Dp[1]*(b*c)%mod)%mod)%mod))%mod+((b*b)%mod*b)%mod+((c*c)%mod*c)%mod)%mod;	
	cout<<fun(n);

	return 0;
}