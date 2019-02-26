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
		cin>>n>>k;
		a=((n)*(n-1))/2;
		if (a<k)
		{
			cout<<"-1\n";
			continue;
		}
		if (a==k)
		{
			invrep(i,n) cout<<i+1<<" ";
			cout<<"\n";
			continue;
		}
		b=((1+sqrt(1+8*k))/2);
		
		c=(b*(b-1))/2;
		x=k-c;

		rep(i,n-b-1) cout<<i+1<<" ";
		i++;
		cout<<i+x<<" ";
		for(j=n;j>i+x;j--){
			cout<<j<<' ';
		}
		cout<<i<<" ";
		for (j=i+x-1; j > i; --j)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
		//cout<<r<<"\n";
	}
	return 0;
}