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

using namespace std;

typedef long double ld;
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;
ll R;
// ll Dp[200005];
ll sf[200005];
ll D[200005]={0};
pl B[200005];
	
ll fun(ll row,ll col){
	
	if (row==R)
	{

	if (D[row]==0)
	{
		return 0;
	}

	if (D[row]==1)
	{
		return abs(B[row].f - col);
	}

	if (col <= B[row].s )
	{
		return abs(B[row].f - col);
	}

	if ( col >= B[row].f )
	{
		return abs(B[row].s - col);
	}

	return min ( 2*abs(B[row].s - col) + abs(B[row].f - col) , 2*abs(B[row].f - col) + abs(B[row].s - col) );

	}

	if (D[row]==0)
	{
		return fun(row+1,col) + 1;
	}

	if (D[row]==1)
	{
		return fun(row+1,sf[B[row].f]) + abs(B[row].f - col) + abs(sf[B[row].f] - B[row].f) + 1;
	}

	if (col <= B[row].s )
	{
		return fun(row+1,sf[B[row].f]) + abs(B[row].f - col) + abs(sf[B[row].f] - B[row].f) + 1;
	}

	if ( col >= B[row].f )
	{
		return fun(row+1,sf[B[row].s]) + abs(B[row].s - col) + abs(sf[B[row].s] - B[row].s) + 1;
	}

	return 1 + min ( fun(row+1,sf[B[row].f]) + 2*abs(B[row].s - col) + abs(B[row].f - col) + abs(sf[B[row].f] - B[row].f) , fun(row+1,sf[B[row].s]) + 2*abs(B[row].f - col) + abs(B[row].s - col) + abs(sf[B[row].s] - B[row].s) );

}

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
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
//	ll A[200005];
	std::vector<pl> V;
	std::vector<ll> safe;
//	memset(A,0,sizeof(A));
	// mem(Dp,-1);

	rep(i,0,200005){
		B[i].first=0;
		B[i].second=50000000;
	}

	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>n>>m>>k>>q;
		R=n;
		rep(i,0,k){
			cin>>a>>b;
			// V.pb(mp(a,b));
			B[a].first = max(B[a].first,b);
			B[a].s = min(B[a].s,b);
			D[a]++;
		}

		// V.pb(-1,-1);
		// sort(V.begin(), V.end());
		
		rep(i,0,q){
			cin>>x;
			// A[x]=1;
			safe.pb(x);
		}

		sort(safe.begin(), safe.end());

		a=-1;
		b=safe[0];
		c=0;
		
		rep(i,0,b){
			sf[i]=b;
		}
		
		y=safe.size();
		x=0;


		while((x+1) != y){
			a=safe[x];
			b=safe[x+1];
			while(i!=b){
				sf[i] = (i-a<b-i)?a:b;
				i++;
			}
			x++;
		}

		while(i!=m+1){
			sf[i++] = b;
		}

		//			sf safe column closest from each i;
		//			B[i].f 	is max column and s is max row
		//			D[i] contain number of treasures if any is present;

		// rep(i,0,m+1) cout<<sf[i]<<" ";


		r=0;
		a=b=c=0;
		x=y=z=0;
		// a=1;
		// rep(i,1,n+1){
		// 	if (D[i]==0)
		// 	{
				
		// 	}
		// }

		cout << fun(1,1);
	return 0;
}