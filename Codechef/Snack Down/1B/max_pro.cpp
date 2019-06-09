#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll ll;
#define mod 1000000007


// To find GCD of a and b 
ll gcd(ll a, ll b); 
  
// To compute x raised to power y under modulo m 
ll power(ll x, unsigned ll y, unsigned ll m); 
  
// Function to find modular inverse of a under modulo m 
// Assumption: m is prime 
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
  
// To compute x^y under modulo m 
ll power(ll x, unsigned ll y, unsigned ll m) 
{ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
  
// Function to return gcd of a and b 
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
		F[n] = (n*fac(--n))%mod;
		return F[n];
	}
	else
		return (n*fac(--n))%mod;
}

ll faci(int n){
	if (n<=1)
	{
		return 1;
	}
	if (R[n]!=0)
	{
		return R[n];
	}
	if (n<1000005)
	{
		R[n] = (modInverse(n)*faci(--n))%mod;
		return R[n];
	}
	else
		return (modInverse(n)*faci(--n))%mod;
}


ll main(ll argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll F[1000005]={0};
	ll R[1000005]={0};
	cin>>t;
	while(t--){
		r=0;
		cin>>n>>k;
		a=((k)*(k+1))/2;
		b=((k+1)*k+2)/2-1;
		if(n<a){
			cout<<"-1\n";
			continue;
		}
		else if(n<b){
			cout<<"0\n";
			continue;
		}
		else{
			n-=b;
			a=n/k;
			c=n%k;
			if (c==0)
			{
				r=(((fac(k+1+a)*fac(k+a))%mod)*((faci(a+1)*faci(a))%mod))%mod;	
			}
			else{
				r=(((fac(k+1+a+1)*fac(k+a+1))%mod)*((((faci(a+1)*faci(a))%mod)*((modInverse(k+2+a-c)*modInverse(k+1+a-c))%mod))%mod))%mod;	
			}
		}
		cout<<r<<"\n";
	}
	return 0;
}