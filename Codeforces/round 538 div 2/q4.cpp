#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 5005

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
	
	ll Dp[mx][mx]={{0}};
	ll n,m;

int main(int argc, char const *argv[])
{
	fastIO
	priority_queue<ll,vector<ll>,greater<ll>> Q;
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll p,q,N,t;
	
	ll A[mx],B[mx];
	
		f=0;
		r=0;
		cin>>N;
		n=N;
		j=1;
		A[j++]=a;
		rep(i,1,n){
			cin>>b;
			if (A[j-1]!=b)
			{
				A[j++]=b;
			}
		}	
		n=j;
		j=n;
		rep(i,1,n+1){
			B[j--]=A[i];
		}

		rep(i,1,n+1){
			rep(j,1,n+1){
				if(A[i]==B[j]){
					Dp[i][j]=Dp[i-1][j-1]+1;
				}else{
					Dp[i][j]=max(Dp[i][j-1],Dp[i-1][j]);
				}
			}
		}
		r=n-(Dp[n][n]+1)/2;
		cout<<r<<"\n";
	return 0;
}