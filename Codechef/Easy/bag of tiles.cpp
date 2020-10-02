#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
using namespace std;
typedef long long int ll;
ll mod_inv(ll a){
    ll p=mod-2;
    ll ans = 1;
    while(p>0){
        if(p%2==1){
            ans*=a;
            ans%=mod;
        }
        a*=a;
        a%=mod;
        p/=2;
    }
    return ans;
}
ll modularExponentiation(ll x,ll n,ll M=mod)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
int main(int argc, char const *argv[])
{
	fastIO
//	cout<<(modularExponentiation(2,32)*mod_inv(modularExponentiation(3,32)))%mod;
	ll a,b,c,f,i,j,p,q,k,r,t,n,x,y,z;
	//ll A[mx];
	cin>>t;
	while(t--){
		r=0;
		cin>>x>>y>>z;
		//sort(A,A+n);
		cin>>p>>q;		

		a=__gcd(x,y);
		//b=__gcd(a,x);
		//c=a/b;
		if(log10(x)+log10(y)-log10(a)<18.0){
			r=((x/a)*y);
		}
		else {
			r=LLONG_MAX;
		}
		n=z;
		f=1;
		while(1){
			if(n==r||n==x||n==y){
				break;
			}
			// if (n%2==0)
			// {
				n/=2;
			 	f*=2;
			// }
		}
		f%=mod;
		if (n==x)
		{
			a=__gcd(f,p);
			f/=a;
			p/=a;
			c=((q*f)%mod*mod_inv(p))%mod;

		}else if (n==y)
		{
			p=q-p;
			a=__gcd(p,q);
			p/=a;
			q/=a;
			
			a=__gcd(f,p);
			f/=a;
			p/=a;
			c=((q*f)%mod*mod_inv(p))%mod;

		}else{
			x%=mod;
			y%=mod;
			a=(f*((q*((y*(q-p))%mod+(p*x)%mod)%mod)%mod))%mod;
			b=(mod_inv(p)*mod_inv(q-p))%mod;
			//cout<<a<<" "<<b<<" "<<"\n";
			c=__gcd(a,b);
			/*
			a/=c;
			b/=c;
			*/
			//cout<<a<<" "<<b<<" ";
			//c=(a*mod_inv(b))%mod;
			c=(a*b)%mod;
		}

		cout<<c<<"\n";
	}
	return 0;
}