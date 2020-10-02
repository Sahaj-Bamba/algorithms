#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define inf 99999999999999999LL

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

#define prime_max 1000006

ll Prime[prime_max]={0};

void prime_seive(int n=prime_max){
	Prime[0]=Prime[1]=1;
	for (ll i = 2; i < n; ++i)
	{
		if (Prime[i]==0)
		{
			for (ll j = i; j < n; j+=i)
			{
			    if(Prime[j]==0)
					Prime[j]=i;
			}
		}
	}
}
bool check_prime(int n){
	if (Prime[n]==n)
	{
		return true;
	}
	else{
		return false;
	}
}
bool check__prime(ll x){
	ll f,i,j,k;
	for (i = 2; i <= sqrt(x); ++i)
	{
		if (x%i==0)
		{
			return false;
		}
	}
	return true;
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
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,R;
	prime_seive();
		t=0;
		f=0;
		r=0;
		cin>>n>>b;
		f=0;
		R=inf;
		for(i=2;i<=sqrt(b);i++){
			cout<<i<<" ";
			// if(t>2){
			// 	break;
			// }
			if (b%i==0&&check_prime(i))
			{
				//t++;
				f=1;
				//cout<<i<<" ";
				j=i;
				r=0;
				x=0;
				y=n;
				z=b;
				while(z%i==0){
					x++;
					z/=i;
				}
				
				//cout<<x<<" ";
				for(j=i;j<=n;j*=i){
					r+=y/j;
					if(log10(j)+log10(i)>18){
						break;
					}
				}
				R=min(R,r/x);
				cout<<R<<" ";
				
				//c=i;
				c=exp_mul(i,x);
				if(c==b){
					continue;
				}
				//cout<<c;
				k=b/c;
				if (!(k<prime_max&&(check_prime(k))))
				{
					continue;
				}
				if(!(k>=prime_max&&((check__prime(k))))){
					continue;
				}
				cout<<b<<" ";
				cout<<k<<" ";
				//cout<<exp_mul(5,12);
				j=k;
				r=0;
				x=0;
				y=n;
				cout<<n<<" ";
				z=b;
				while(z%j==0){
					x++;
					z/=j;
				}
				cout<<x<<" ";
				for(j=k;j<=n;j*=k){
					r+=y/j;
					if(log10(j)+log10(k)>18){
						break;
					}
				}
				R=min(R,r/x);
				b=k;
				cout<<R<<" ";
				
			}
		}
		if(f==0){
			for(i=b;i<=n;i*=b){
				r+=n/i;	
				if(log10(i)+log10(b)>18){
					break;
				}
			}
			R=min(R,r);
		}
		if(R==inf){
			R=0;
		}
		// if (check_prime(b))
		// {
		// 	for(i=b;i<=n;i*=b){
		// 		r+=n/i;
		// 	}
		// }

		cout<<R<<"\n";
	return 0;
}