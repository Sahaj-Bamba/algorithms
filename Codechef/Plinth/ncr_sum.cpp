#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,n) for(i=0;i<n;i++)
#define invrep(i,n) for (i = n-1; i >=0 ; --i)

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
	ll a,b,c,i,j,k,f,r,t,n,m,x,y,z,p,q;
	ll A[mx];
	memset(A,-1,sizeof(A));
	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		if (n%2==0)
		{
			for (int i = 0; i < n; ++i)
			{
				cin>>A[i];
			}
			cout<<0<<"\n";
			continue;
		}else{
			f=0;
			rep(i,n){
				cin>>A[i];
				if (A[i]%2==0)
				{
					f=1;
				}
			}
			if (f==1)
			{
				cout<<1<<"\n";
				continue;
			}
		
			r=0;
			k=4;
			while(f&&r){
				r=0;
				rep(i,n){
					if (A[i]>=k/2)
					{
						r=1;
					}
					if (((A[i]>=(k/2))&&(A[i]%k==((k/2)-1))))
					{
						f=0;
						break;
					}
				}
				k*=2;	
			}
			if (r==0)
			{
				r=-1;
			}else{
				r=k/2-1;
			}
			cout<<r<<"\n";
		}
	}
	return 0;
}