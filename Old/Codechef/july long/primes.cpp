#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define INF LLONG_MAX

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
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

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
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;


	prime_seive();

	cout<<primes[1000]<<"\n";

	rep(i,1,50){
		cout<<(i*i)%primes[1000]<<"\t";
	}

	cout<<primes[1005]<<"\n";

	rep(i,1,50){
		cout<<(i*i)%primes[1005]<<"\t";
	}


	return 0;
}