#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
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
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>a>>b;
		if (a==b)
		{
			r=1;
		}else{
			c=a-b;
			x=(exp_mul(3,c-2)*((c*(c-1))/2)%mod)%mod;
			//x
			while(b!=0){
				x*=a;
				x%=mod;
				x*=mod_inv(b);
				x%=mod;
				b--;
				a--;
			}
			x+=(exp_mul(2,c));
			x%=mod;
		    r=x;
		}
		cout<<r<<"\n";	
	}

//	cout<<r<<"\n";
	return 0;
}