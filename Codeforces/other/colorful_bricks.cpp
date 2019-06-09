#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 998244353
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



	ll F[1000005]={0};
	ll R[1000005]={0};
	ll ncrp[2005][2005]={{0}};

ll gcd(ll a, ll b); 
ll power(ll x,ll y,ll m); 
ll m = mod;

ll modInverse(ll a) 
{ 
    ll g = gcd(a, m); 
    if (g != 1) {
    	return 1;
    }
    else
    { 
        return power(a, m-2, m); 
    } 
} 

ll power(ll x,ll y,ll m=mod) 
{ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
  
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
ll fac(int n){
	if (n<=1)
	{
		return 1;
	}
	if (F[n]!=0)
	{
		return F[n];
	}
	if (n<1000005)
	{
		F[n] = (n*fac(n-1))%mod;
		return F[n];
	}
	else
		return (n*fac(n-1))%mod;
}

ll faci(int n){
	
	if (R[n]!=0)
	{
		return R[n];
	}
	ll x = fac(n);
	R[n] = modInverse(x);
	return R[n];
	
}

ll ncr(ll n , ll r){
	
	if (n<r)
	{
		return 0;
	}
	if (ncrp[n][r]!=0)
	{
		return ncrp[n][r];
	}
	else{
		ncrp[n][r]=((fac(n)*((faci(r)*faci(n-r))%mod))%mod);
		return ncrp[n][r];
	}
	
}


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,m,x,y,z,p,q;
	ll A[mx];
	memset(A,-1,sizeof(A));

		f=0;
		r=0;
		cin>>n>>m>>k;
		r=((ncr((n-1),k)*m)%mod*power((m-1),k))%mod;
		cout<<r<<"\n";
//	}
	return 0;
}