#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
#define mod 1000000007
typedef long long int ll;



// To find GCD of a and b 
ll gcd(ll a, ll b); 
  
// To compute x raised to power y under modulo m 
ll power(ll x,ll y,ll m); 
  
// Function to find modular inverse of a under modulo m 
// Assumption: m is prime 
ll B[100005]={0};
ll m = mod;
ll modInverse(ll a) 
{ 
    ll p;
    if (a<100005)
    {
	    if (B[a]!=0)
	    {
	        return B[a];
	    }
	        B[a] = power(a, m-2, m); 
    	    return B[a];
	}
    else{
    	return power(a, m-2, m); 
    } 
} 
  
// To compute x^y under modulo m 
ll power(ll x,ll y,ll m) 
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
  

int main(int argc, char const *argv[])
{
    fastIO
    ll a,b,c,i,j,k,l,h,r,t,n,x,y,z;
    ll A[100005]={0};
    
    cin>>t;
    while(t--){
        //cout<<A[6]<<" ";
        cin>>n;
        if (n==2){
            cin>>l>>r>>h;
            z=(r-l);
            for (j=1; j < z/2+1; ++j)
            {
            	/*
                b=modInverse(r-l);
                c=(4*h*j)%mod;
                c*=b;
                c%=mod;
                a=((c*j)%mod*b)%mod;
                x=(c-a+mod)%mod;
                A[l+j]+=x;
                if (l+j!=r-j)
                {
                    A[r-j]+=x;
                }
                A[r-j]%=mod;
                A[l+j]%=mod;
                */
                //A[i]+=((((h*j*4)*(1-((j)*b)%mod+mod)%mod)%mod)*b)%mod;
                b=modInverse(z);
                b*=b;
                b%=mod;
                c=(4*(h*j)%mod*(z-j))%mod;
                x=(c*b)%mod;
                A[l+j]+=x;
                if (l+j!=r-j)
                {
                    A[r-j]+=x;
                }
                A[r-j]%=mod;
                A[l+j]%=mod;
                
            }
        }
        else{
            cin>>a;
            cout<<A[a]<<"\n";
        }
    }
    return 0;
}