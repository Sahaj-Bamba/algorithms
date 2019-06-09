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

typedef int ll;
typedef pair<ll,ll> pl;
ll Dp[mx][3][3][3];
ll A[mx];
ll n,m;

ll fun(ll ind=0,ll cur=0,ll next=0,ll nn=0){
	if(ind<mx&&cur<3&&next<3&&nn<3&&Dp[ind][cur][next][nn]!=-1){
		return Dp[ind][cur][next][nn];
	}
	if(ind>m){
		return 0;
	}
	if (A[ind]-cur==0)
	{
		return fun(ind+1,next,nn);
	}
	if (A[ind]-cur<0)
	{
		return -1+fun(ind+1,next,nn);
	}
	if (A[ind+1]-next<0||A[ind+2]-nn<0)
	{
		return -1;
	}
	if(ind==m){
		return (A[ind]-cur)/3;
	}
	// if (ind==m-1)
	// {
	// 	return (A[ind]-cur)/3+fun(ind+1,next,0);
	// }

	ll r=0,i,j,k;
	ll a=0,b=0,c;
	i=A[ind]-cur;
		if (i>2)
		{
			r=(i-2)/3;
		}
	cur+=r*3;
		a=1+fun(ind,cur+3,next,nn);
		i=min(min(A[ind]-cur,A[ind+1]-next),A[ind+2]-nn);
		if(i!=0)
		b=1+fun(ind,cur+1,next+1,nn+1);		

	if(ind<mx&&cur<3&&next<3&&nn<3){
			Dp[ind][cur][next][nn]=max(a,b)+r;
		}
		return max(a,b)+r;

		// a=A[ind]-cur;
	// b=A[ind+1]-next;
	// c=A[ind+2];

	// r=a/3;
	
	
	// if(a>4)
	// a%=3;
	// if(b>4)
	// b%=3;
	// if(c>4)
	// c%=3;

	// i=min(min(a,b),c);

	// r+=i;
	// //cout<<r<<" "<<ind<<"\n";
	
	// return r+fun(ind+1,next+i,i);
	
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll p,q,t;
	mem(A,0);
	mem(Dp,-1);
		
		f=0;
		r=0;
		cin>>n>>m;
		
		rep(i,0,n){
			cin>>a;
			A[a]++;
		}
		

		cout<<fun()<<"\n";

	return 0;
}