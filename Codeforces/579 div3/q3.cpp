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

#define prime_max 1000006

ll Prime[prime_max]={0};
std::vector<ll> primes;

void prime_seive(int n=prime_max){
	Prime[0]=Prime[1]=1;
	for (int i = 2; i < n; ++i)
	{
		if (Prime[i]==0)
		{
			for (int j = i; j < n; j+=i)
			{
			    if(Prime[j]==0){
				    Prime[j]=i;

                }
			}
		}
	}
    rep(i,2,n){
        if (Prime[i]==i)
        {
            primes.pb(i);
        }
    }
}



//	uses of seive

bool check_prime(int n){
	if (Prime[n]==n)
	{
		return true;
	}
	else{
		return false;
	}
}

ll num_fac(ll a){
    ll an = a;
    n = primes.size();
    r=1;
    ll ans = 1;
    ll power = 0;
 	rep(i,0,n){
 		power=0;
    	while(a%primes[i]==0)
    	{
    		power++;
    		a/=primes[i];
    	}
    	ans*=(power+1);
    	if (a==1)
    	{
    		break;
    	}
    }

    if(a!=1){
        ans*=(2);
    }
 
    return ans;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	fastIO
	prime_seive();	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	
	memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
		f=0;
		r=0;
	
		cin>>n;
		cin>>a;
		rep(i,1,n){
			cin>>b;
			a=__gcd(a,b);
		}	



		cout<<r<<"\n";	
	
	return 0;
}