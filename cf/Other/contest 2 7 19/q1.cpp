#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

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


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));

	cin>>b;
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n)	cin>>A[i];
		
		if (b%2==0)
		{
			if(A[n-1]%2==0){
				cout<<"even";
				return 0;
			}else{
				cout<<"odd";
				return 0;
			}
		}

		rep(i,0,n){
			if (A[i]%2==1)
			{
				r++;
			}
		}

		if(r%2==0){
			cout<<"even";
		}else{
			cout<<"odd";
		}
	return 0;
}