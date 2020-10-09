#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long ll1;
typedef double db;
const ll MAX=5e5+5;
ll MOD=1e9+7;
#define pb push_back
#define se second
#define fi first
#define sb __builtin_popcount
#define maxe max_element
#define mine min_element
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<endl;
#define debug4(x,y,z,w) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\t"<<#w<<" :: "<<w<<endl;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define fbo find_by_order
#define ook order_of_key
#define ub upper_bound
#define lb lower_bound
#define pq priority_queue
#define pll pair<ll,ll>
// using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
ll add(ll a,ll b){return (a+b)%MOD;}
ll mul(ll a,ll b){return (a*b)%MOD;}
ll sub(ll a,ll b){return (a-b+MOD)%MOD;}
#define boost               ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define error 0.000000000000000001
#define dt pair<ll,pll>
ll dp[MAX];
ll value[MAX],wt[MAX],depth[MAX],fiocc[MAX];
ll total;
vector<ll>v[MAX];
vector<ll>euler;
ll lookup[MAX][20];
void dfs2(ll i,ll p,ll d)
{
	fiocc[i]=euler.size();
	depth[i]=d;
	for(ll u:v[i]){
		if(u==p)continue;
		euler.pb(i);
		dfs2(u,i,d+1);
	}
	euler.pb(i);
}
void pre()
{
	dfs2(1,-1,0);
	for(ll i=0;i<euler.size();i++)lookup[i][0]=euler[i];
	for(ll j=1;j<20;j++){
		for(ll i=0;i<euler.size();i++){
			if(lookup[i][j-1]==-1 || lookup[i+(1<<(j-1))][j-1]==-1)continue;
			if(depth[lookup[i][j-1]]<depth[lookup[i+(1<<(j-1))][j-1]])lookup[i][j]=lookup[i][j-1];
			else lookup[i][j]=lookup[i+(1<<(j-1))][j-1];
		}
	}
}
ll getlca(ll a,ll b)
{
	if(a>b)swap(a,b);
	ll x=b-a+1;
	ll lg=log2(x);
	if(depth[lookup[a][lg]]<depth[lookup[b-(1<<lg)+1][lg]])return lookup[a][lg];
	return lookup[b-(1<<lg)+1][lg];
}
ll getdis(ll a,ll b)
{
	if(a==b)return 0;
	ll x=getlca(fiocc[a],fiocc[b]);
	return depth[a]+depth[b]-2*depth[x];
}
ll dfs(ll i,ll p)
{
	ll ans=0,ans1=0;
	for(ll u:v[i]){
		if(u==p)continue;
		ll x=dfs(u,i);
		ans+=x;
		ans1+=value[u];
	}
	ans+=ans1;
	ans1+=wt[i];
	value[i]=ans1;
	return ans;
}
void dfs1(ll i,ll p)
{
	if(p!=-1){
		ll x=dp[p];
		x+=total-2*value[i];
		dp[i]=x;
	}
	for(ll u:v[i])if(u!=p)dfs1(u,i);
}
void update()
{
	dp[1]=dfs(1,-1);
	total=value[1];
	dfs1(1,-1);
}
int main()
{
	freopen("inpp1","r",stdin);
    freopen("oupp1","w",stdout);
    ll a,q,b;
	ll n;
	cin>>n>>q;
	for(ll i=1;i<=n;i++)cin>>wt[i];
	for(ll i=0;i<n-1;i++){
		cin>>a>>b;
		v[a].pb(b);
		v[b].pb(a);
	}
	memset(lookup,-1,sizeof(lookup));
	pre();
	update();
	ll c;
	// cin>>q;
	ll t=sqrt(q);
	for(ll i=0;i<q;i+=t){
		vector<pll>query;
		for(ll j=i;j<min(q,i+t);j++){
			cin>>a>>b;
			if(!(a-1)){
				cin>>c;
				query.pb({b,c});
			}
			else {
				ll ans=dp[b];
				for(pll u:query){
					ll x=getdis(b,u.fi);
					ans-=x*wt[u.fi];
					ans+=x*u.se;
				}
				cout<<ans<<'\n';
			}
		}
		for(pll u:query)wt[u.fi]=u.se;
		update();
	}
}