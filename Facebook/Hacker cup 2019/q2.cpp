#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define INF LLONG_MAX

#define mx 100005

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

int main(int argc, char const *argv[])
{
 	fastIO
	// #ifndef ONLINE_JUDGE
 //    freopen("../../input","r",stdin);
 //    freopen("../../output","w",stdout);
	// #define mx 100005
 //    #else
	// #define mx 1000005
 //    #endif
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	char X;
	char A[mx];
	//memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	cin>>t;
	
	rep(j,0,t){
		
		cin>>A;
		n = strlen(A);
		r=0;
		rep(i,0,n){
			if (A[i]=='B')
			{
				r++;
			}
		}

		a=2+r;
		b=1+2*r;

		if (n>=a)
		{
			X='Y';
		}else{
			X='N';
		}
		if (r==1)
		{
			if (n==3)
			{
				X='Y';
			}else{
				X='N';
			}
		}
		if (r==0)
		{
			if (n==1)
			{
				X='Y';
			}else{
				X='N';
			}
		}


		cout<<"Case #"<<j+1<<": "<<X<<"\n";	
	}

	return 0;
}