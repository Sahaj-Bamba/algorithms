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
typedef unsigned long long int ll;
typedef pair<ll,ll> pl;

#define mlx 50000

ld pi=2.0*acos(0.0);

mt19937_64 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;
ll A[mx];
ll Parent[mx];
pl edges[mx];

void initialise(){
	ll i;
	rep(i,0,N+1){
		Parent[i]=i;
	}
}

ll dsufun(ll a,ll b){
	if (A[a]>A[b])
	{
		return 1;
	}else if (A[a]<=A[b])
	{
		return -1;
	}else{
		return 0;
	}
}

ll parent(ll ind){
	if (ind==Parent[ind])
	{
		return ind;
	}
	return Parent[ind] = parent(Parent[ind]);
}

bool join(ll a, ll b){
	ll x,y;
	x=parent(a);
	y=parent(b);
	if (x==y)
	{
		return false;
	}
	switch (dsufun(x,y))
	{
		case -1: Parent[x]=y;
				break;
		case 1: Parent[y]=x;
				break;
	}
	return true;
}


int main(int argc, char const *argv[])
{
    freopen("inp1","w",stdout);
	std::uniform_int_distribution<unsigned long long> dis;
	ll n,q,a,x,y;
	std::vector<ll> V;
	ll i;
	N = n = dis(rng32)%mlx;
	// N = n = 10000;
	q = dis(rng32)%mlx;
	// q = 50000;
	cout<<n<<" "<<q<<"\n";
	rep(i,0,n){
		a = dis(rng32)%mlx;
		cout<<a<<" ";
	}
	cout<<"\n";
	initialise();
	rep(i,1,n){
		x=(dis(rng32))%n + 1;
		y=(dis(rng32))%n + 1;
		if (join(x,y))
		{
			cout<<x<<" "<<y<<"\n";
			edges[i].f = x;
			edges[i].s = y;
		}else{
			i--;
		}
	}
	rep(i,0,q){
		a = (dis(rng32))%2;
		if (a==0)
		{
			x=(dis(rng32)) % mlx;
			y=(dis(rng32))%n + 1;
			cout<<1<<" "<<y<<" "<<x<<"\n";
		}else{
			y=(dis(rng32))%n + 1;
			cout<<2<<" "<<y<<"\n";
		}
	}
	return 0;
}