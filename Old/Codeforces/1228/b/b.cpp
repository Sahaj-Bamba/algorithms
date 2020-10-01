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
	ll A[1005][1005]={0};
	ll B[mx];
	ll C[mx];
	// memset(A,-1,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=1;
	
		cin>>n>>m;
		rep(i,0,n)	cin>>B[i];
		rep(i,0,m)	cin>>C[i];
										//	-1 fill
										//	0 unknown
										//	1 empty
		rep(i,0,n){
			rep(j,0,B[i])
				if (A[i][j]==0)
				{
					A[i][j]=-1;
				}
			A[i][j]=1;
		}
		
		rep(i,0,m){
			rep(j,0,C[i]){
				if (A[j][i]==0)
				{
					A[j][i]=-1;
				}else if (A[j][i]==-1)
				{
					continue;
				}else{
					r=0;
				}
			}
			if (A[j][i]==-1)
			{
				r=0;
			}else{
				A[j][i]=1;
			}
		}
		if (r==0)
		{
			cout<<"0";
			return 0;
		}
		rep(i,0,n){
			rep(j,0,m){
				if (A[i][j]==0)
				{
					r*=2;
					r%=mod;
				}
			}
		}
		


		cout<<r<<"\n";	

	return 0;
}