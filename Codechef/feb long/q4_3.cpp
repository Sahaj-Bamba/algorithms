#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

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

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;
pl ans,mul,temp;
ll k,n;

// void fun(int m){
// 	if(m==1){

// 	}
// 	if(m==0){
// 		return;
// 	}
// 	ans
// }
ll modularExponentiation(ll x,ll n,ll M=mod)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
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
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,f,r,x,y,z;
	ll m,p,q,t,res;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		res=0;
		cin>>n>>k>>m;
		ans.f=1;
		ans.s=n;
		x=(m+1)/2;
		// x--;
		// while(x--){

		// }
		temp.f=modularExponentiation((n-1),x);
		temp.s=modularExponentiation((n),x);

		mul.f=temp.f;
		mul.s=temp.s;
		mul.s*=n;
		mul.s%=mod;
		mul.s*=(n+k);
		mul.s%=mod;

		temp.f=temp.s-temp.f;
		while(temp.f<0){
			temp.f+=mod;
		}
		temp.f%=mod;

		temp.s*=n;
		temp.s%=mod;

		res=temp.f*mod_inv(temp.s);
		res%=mod;

		if (m%2==0)
		{
			res+=(mul.f*mod_inv(mul.s))%mod;
			res%=mod;
		}
		// res+=ans.f*mod_inv(ans.s);
		// res%=mod;
		// while(m>1){
		// 	ans.f=ans.f*(n-1);
		// 	ans.s=ans.s*n;
		// 	m-=2;
		// 	ans.f%=mod;
		// 	ans.s%=mod;
		// 	res+=ans.f*mod_inv(ans.s);
		// 	res%=mod;
		// }
		// if(m==1){
		// 	ans.f*=(n-1);
		// 	ans.s*=(n+k);
		// 	res+=ans.f*mod_inv(ans.s);
		// 	res%=mod;
		// }
		// ans.f%=mod;
		// ans.s%=mod;
		// r=ans.f*mod_inv(ans.s);
		// r%=mod;
		 r=res;
		cout<<r<<"\n";
	}
	return 0;
}