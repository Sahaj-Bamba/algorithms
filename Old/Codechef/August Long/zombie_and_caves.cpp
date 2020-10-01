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
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	std::vector<ll> V;
	std::vector<ll> V2;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
		
		mem(A,0);
		V.clear();
		V2.clear();
		f=0;
		r=0;
	
		cin>>n;
		rep(i,1,n+1){
			cin>>c;
			a=i-c;
			b=i+c;
			if (a<1)
			{
				a=1;
			}
			if (b>n)
			{
				b=n;
			}
			A[a]++;
			A[b+1]--;
		}	
		r=0;

		rep(i,1,n+1){
			r+=A[i];
			V.pb(r);
		}

		sort(V.begin(), V.end());
		f=0;
		rep(i,0,n){
			cin>>a;
			V2.pb(a);
		}
		sort(V2.begin(), V2.end());

		rep(i,0,n){
			if (V[i]!=V2[i])
			{
				f=1;
				break;
			}
		}

		if (f==1)
		{
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}	
	}

	return 0;
}