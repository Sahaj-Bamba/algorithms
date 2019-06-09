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

	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n;
		if(((n+1)&n)!=0){
			while(n){
				r++;
				n/=2;
			}
			r=pow(2,r)-1;
		}else{
			r=1;
			x=0;
			for(i=3;i<n;i++){
				a=i^n;
				b=i&n;
				if(a==0){
					r=max(r,b);
				}else if (b==0)
				{
					r=max(r,a);
				}else{
					r=max(r,__gcd(a,b));
				}
			}
		}

		cout<<r<<"\n";
	}
	return 0;
}