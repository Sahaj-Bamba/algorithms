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
	
#define mx 1000005
    
using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

std::vector<ll> pfacs;
void primefacs(ll a){
	ll i,b=a,f=0;
	// cout<<a;
	// return;
	rep(i,2,sqrt(b)+1){
		while(a%i==0){
			a/=i;
			f=1;
		}
		if (f)
		{
			pfacs.pb(i);
			f=0;
		}
	}
	if (a!=1)
	{
		pfacs.pb(a);
	}
	return;
}

ll exp_mul(ll b,ll p){
    ll ans = 1;
    while(p>0){
        if(p%2!=0){
            ans*=b;
            ans%=mod;
        }
        b*=b;
        b%=mod;
        p/=2;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>a>>b;


		primefacs(a);
		n=pfacs.size();
		// return 0;
		r=1;
		for(auto X : pfacs){
			j=X;
			f=0;
			while(b/j!=0){
				r*=(exp_mul(X,b/j))%mod;		
				r%=mod;
				if (j>1e18/X)
				{
					break;
				}
				j*=X;
			}
		}
	
		cout<<r<<"\n";	
	
	return 0;
}