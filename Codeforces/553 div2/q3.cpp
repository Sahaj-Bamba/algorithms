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

ll N;

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

		f=0;
		r=0;
		cin>>a>>b;
		a--;
        x=floor(log(a)/log(4))+1;
        y=floor(log((a)/2)/log(4))+1;
        z=floor(log(a)/log(2));
        if(x==y){
            i=(pow(4,x)-1)/3;
            r+=(((((i)%mod)*((2+(i-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r%=mod;
            j=a-i;
            r+=(((((j)%mod)*((4+(j-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r%=mod;
        }else{
            i=(2*(pow(4,y)-1))/3;
            r+=(((((i)%mod)*((4+(i-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r%=mod;
            j=a-i;
            r+=(((((j)%mod)*((2+(j-1)*2)%mod))%mod)*exp_mul(2,mod-2)%mod)%mod;
            r%=mod;
        }

        a=b;
        ll r2=0;
        x=floor(log(a)/log(4))+1;
        y=floor(log((a)/2)/log(4))+1;
        z=floor(log(a)/log(2));
//        cout<<x<<" "<<y<<" ";
        if(x==y){
            i=(pow(4,x)-1)/3;
            r2+=(((((i)%mod)*((2+(i-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r2%=mod;
            j=a-i;
            r2+=(((((j)%mod)*((4+(j-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r2%=mod;
        }else{
            i=(2*(pow(4,y)-1))/3;
            r2+=(((((i)%mod)*((4+(i-1)*2)%mod))%mod)*exp_mul(2,mod-2))%mod;
            r2%=mod;
            j=a-i;
            r2+=(((((j)%mod)*((2+(j-1)*2)%mod))%mod)*exp_mul(2,mod-2)%mod)%mod;
            r2%=mod;
        }
//		cout<<r<<" "<<r2<<" "<<"\n";
		cout<<(r2-r+mod)%mod<<"\n";	

	return 0;
}