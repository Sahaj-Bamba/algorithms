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
std::vector<pl> V[mx];

bool cmp(pl a,pl b){
	if(a.f>b.f){
		return true;
	}else if(a.f==b.f){
		if(a.s<b.s){
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	pl A[mx];
	
	cin>>n>>m>>k;
		f=0;
		r=0;
		
		rep(i,1,n+1){
			cin>>A[i].f;
			A[i].s=i;
		}
		
		rep(i,0,m){
			cin>>a>>b;
			V[a].pb(mp(A[b].f,b));
			V[b].pb(mp(A[a].f,a));
		}
		
		rep(i,1,n+1){
			sort(V[i].begin(), V[i].end(),cmp)
		}
		
		rep(i,1,n+1){
			if (V[i].size()<k)
			{
				cout<<"-1\n";
			}else{
				cout<<V[i][k-1].s<<"\n";
			}
		}
	
	return 0;
}