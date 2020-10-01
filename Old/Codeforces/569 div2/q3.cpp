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
		f=0;
		r=0;
		cin>>n>>t;
		rep(i,0,n)	cin>>A[i];
		a=0;
		b=n-1;
		ll B[mx];
		ll C[mx];
		r=A[0];
		rep(i,1,n)	r=max(r,A[i]);
		rep(i,0,2*n){
			x=A[a];
			y=A[a+1];
			if (x==r)
			{
				break;
			}
			B[i]=x;
			C[i]=y;
			if (x>y)
			{
				A[a+1]=x;
				A[b+1]=y;
				a++;
				b++;
			}else{
				A[a+1]=y;
				A[b+1]=x;
				a++;
				b++;
			}
		}
		f=i;
		while(t--){
			cin>>x;
			x--;
			if (x<f)
			{
				cout<<B[x-1]<<" "<<C[x-1]<<"\n";
			}else 
			{
				x-=f;
				cout<<A[a]<<" "<<A[a+1+ ((x)%(n-1)) ]<<"\n";
				/* code */
			}

		}


	return 0;
}