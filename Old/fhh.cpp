#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007LL
#define ROD 1000000009ll
#define INF 12345678123456ll
#define MIN(a,b) (a>b?b:a)
using namespace std;
#define mp make_pair
#define  piii pair<pair<ll,ll>,ll>
#define pii pair<ll,ll>
#define fi first
#define se second
void dothis(),pre(),lca(),find_sum(ll,ll),dfs(ll,ll),normal_dfs(ll,ll);
ll find_dist(ll,ll),contain(ll,ll);
ll pp,t,n,q,tot,tim=0,lim=5,ar[100005],pr[100005],lr[100005][20],tr[100005][20];
pii sum[100005];
vector <ll> vr[100005];
unordered_map <ll,ll> mr;
void prt();
int main()
{
	//cout<<log(2.71)<<"AD";
	pre();
	// rep(i,1,n+1)
	// {
	// 	rep(j,0,5)
	// 	cout<<lr[i][j]<<" ";
	// 	cout<<"\n";
	// }
	//prt();
	for(int i=0;i<q;i++)
	{
		scanf("%lld",&pp);
		if(pp==0)
		{
			ll node,ch;
			scanf("%lld %lld",&node,&ch);
			mr[node]=ch;
			if(mr.size()==lim)
			{
				dothis();
				// /prt();
			}
		}
		else
		{
			ll node,ans;
			scanf("%lld",&node);
			ans=sum[node].fi;
			for(auto itr=mr.begin();itr!=mr.end();itr++)
			{
				pii p=*itr;
				ll q=find_dist(node,p.fi);
				//cout<<node<<" "<<p.fi<<" "<<q<<"AA\n";
				ans=(ans+q*(p.se-ar[p.fi]));
			}	
			printf("%lld\n",ans);
		}	
	}
}
// void prt()
// {
// 	rep(i,1,n+1)
// 	cout<<sum[i].fi<<" "<<sum[i].se<<"\n";
// 	cout<<"\n";
// }
void normal_dfs(ll idx,ll p)
{
	lim=sqrt(2*n*log(2)/log(n));
	pr[idx]=p;
	lr[idx][0]=p;
	tr[idx][0]=tim;
	for(int i=0;i<vr[idx].size();i++)
	{
		if(vr[idx][i]==p)
			continue;
		tim++;
		normal_dfs(vr[idx][i],idx);
	}
	tr[idx][1]=tim;
}
ll find_dist(ll a,ll b)
{
	ll tempa=a,tempb=b,node,ans=0;
	for(int i=19;i>=0;i--)
	{
		node=lr[tempa][i];
		if(node!=0&&!(contain(node,a)&&contain(node,b)))
		{
			ans+=(1ll<<i);
			tempa=node;
		}	
	}
	for(int i=19;i>=0;i--)
	{
		node=lr[tempb][i];
		if(node!=0&&!(contain(node,a)&&contain(node,b)))
		{
			ans+=(1ll<<i);
			tempb=node;
		}	
	}	
	return ans+(a!=b)+((!contain(a,b))&&(!contain(b,a)));
}
ll contain(ll p,ll c)
{
	return (tr[p][0]<=tr[c][0]&&tr[c][1]<=tr[p][1]);
}
void dothis()
{
	tot=0;
	for(auto itr=mr.begin();itr!=mr.end();itr++)
	{
		pii p=*itr;
		ar[p.fi]=p.se;
	}
	mr.clear();
	find_sum(1,0);
	for(int i=0;i<vr[1].size();i++)
	{
		dfs(vr[1][i],1);
	}
}
void pre()
{
	scanf("%lld %lld",&n,&q);	
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&ar[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		ll x,y;
		scanf("%lld %lld",&x,&y);
		vr[x].push_back(y);
		vr[y].push_back(x);
	}
	normal_dfs(1,0);
	lca();
	dothis();
}
void lca()
{
	for(int j=1;j<20;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(lr[lr[i][j-1]][j-1]!=0)
				lr[i][j]=lr[lr[i][j-1]][j-1];
		}		
	}
}
void find_sum(ll idx,ll p)
{
	ll size_=vr[idx].size();
	sum[idx]=mp(0ll,ar[idx]);
	tot+=ar[idx];
	rep(i,0,size_)
	{
		if(vr[idx][i]==p)
			continue;
		find_sum(vr[idx][i],idx);
		sum[idx].fi+=(sum[vr[idx][i]].fi+sum[vr[idx][i]].se);
		sum[idx].se+=sum[vr[idx][i]].se;
	}
}
void dfs(ll idx,ll p)
{
	//pr[idx]=p;
	ll size_=vr[idx].size();
	//cout<<idx<<" "<<sum[idx].fi<<" "<<sum[p].fi<<" "<<sum[idx].fi<<" "<<sum[idx].se<<" "<<tot<<" "<<sum[idx].se<<"\n";
	sum[idx].fi=sum[idx].fi+(sum[p].fi-(sum[idx].fi+sum[idx].se))+(tot-sum[idx].se);
	rep(i,0,size_)
	{
		if(vr[idx][i]==p)
			continue;
		dfs(vr[idx][i],idx);
	}
}
