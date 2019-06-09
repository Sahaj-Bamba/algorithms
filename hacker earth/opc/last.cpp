#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define mod 1000000007

// To find GCD of a and b 
ll gcd(ll a, ll b); 
  
// To compute x raised to power y under modulo m 
ll power(ll x,ll y,ll m); 
  
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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		
	}
	return 0;
}