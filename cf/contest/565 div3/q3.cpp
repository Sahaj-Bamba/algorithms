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
	ll a,b,c,d,e,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	ll B[10]={0};
	ll C[]={4,8,15,16,23,42};
	memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n){
			cin>>a;
			if (a==C[0])
			{
				B[0]++;
			}else{
				rep(j,1,6){
					if (a==C[j])
					{
						if (B[j-1]>0)
						{
							B[j]++;
							B[j-1]--;
							break;
						}
					}
				}
			}
		}

		i=0;
		f=0;
		r=0;
		a=0;
		r=B[5];
		cout<<n-r*6<<"\n";	

	return 0;
}