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
typedef long long int ll;
typedef pair<ll,ll> pl;

ld pi=2.0*acos(0.0);

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());

ll N;

ll A[3][mx];
std::vector<ll> V[mx];
ll P[mx];
std::vector<ll> V2;

ll minn;
ll dp[100005][4][4];


ll fun(ll idx,ll a,ll b){
	ll r = INF;
	ll i;
	if (idx == N)
	{
		return 0;
	}
	if (dp[idx][a][b]!=0)
	{
		return dp[idx][a][b];
	}

	rep(i,0,3){
		if (i!=a && i!=b)
		{
			r = min(r,A[i][V2[idx]]+fun(idx+1,b,i));
		}
	}
	return dp[idx][a][b]=r;
}

void fun2(ll idx,ll a,ll b){
	ll i;
	// cout<<"hi";
	if (idx == N)
	{
		return;
	}
	rep(i,0,3){
		//if(i!=a&&i!=b)
		//				cout<<idx<<" "<<dp[idx+1][b][i]<<" "<<A[i][V2[idx]]<<" "<<dp[idx][a][b]<<"\n";
		if (i!=a && i!=b && A[i][V2[idx]] + dp[idx+1][b][i] == dp[idx][a][b])
		{
			P[V2[idx]]=i;
			fun2(idx+1,b,i);
			return;
		}
	}
}

int main(int argc, char const *argv[])
{
	// cout<<"HI";
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	
	l=0;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
		f=0;
		r=0;
	
		cin>>n;
		N=n;
		rep(j,0,3)
		rep(i,0,n)	cin>>A[j][i];
		
		rep(i,0,n-1){
			cin>>a>>b;
			a--;
			b--;
			V[a].pb(b);
			V[b].pb(a);
		}

		rep(i,0,n){
			if (V[i].size()==1)
			{
				x=i;
			}else if (V[i].size()>=3)
			{
				f=1;
				break;
			}	
		}
		if (f==1)
		{
			cout<<"-1\n";
			return 0;
		}
		if (V[V[x][0]][0]==x)
		{
			c=1;
		}else{
			c=0;
		}
		// cout<<"Hi";
		V2.pb((x));
		V2.pb((V[x][0]));
		rep(i,2,n){
			if (V[V2[i-1]][0]==V2[i-2])
			{
				V2.pb(V[V2[i-1]][1]);
			}else{
				V2.pb(V[V2[i-1]][0]);
			}
		}
		// rep(i,0,3)

		minn = r = fun(0,3,3);
	// cout<<"Die";
		// return 0 ;
		fun2(0,3,3);
		// cout<<"Hi";
		cout<<r<<"\n";
		rep(i,0,n)
			cout<<P[i]+1<<" ";

		// // rep(i,0,3){
		// // 	cout<<i<<" ";
		// // 	for(auto X : V[i]){
		// // 		cout<<X<<" ";
		// // 	}
		// // 	cout<<"\n";
		// // }
		// // cout<<x<<" "<<V[x][0];
		// r = A[x] + B[V[x][0]] + fun(V[V[x][0]][c],V[x][0],0,1);
		// k=0;
		// y=1;
		// // cout<<r<<"\n";
		// // fun(V[V[x][0]][c],V[x][0],0,2);
		// a = A[x] + C[V[x][0]] + fun(V[V[x][0]][c],V[x][0],0,2);
		
		// if (a<r)
		// {
		// 	r = a;
		// 	k = 0;
		// 	y = 2;
		// }
		// // cout<<r<<"\n";
		// a = B[x] + A[V[x][0]] + fun(V[V[x][0]][c],V[x][0],1,0);
		// if (a<r)
		// {
		// 	r = a;
		// 	k = 1;
		// 	y = 0;
		// }

		// a = B[x] + C[V[x][0]] + fun(V[V[x][0]][c],V[x][0],1,2);
		// if (a<r)
		// {
		// 	r = a;
		// 	k = 1;
		// 	y = 2;
		// }

		// a = C[x] + A[V[x][0]] + fun(V[V[x][0]][c],V[x][0],2,0);
		// if (a<r)
		// {
		// 	r = a;
		// 	k = 2;
		// 	y = 0;
		// }

		// a = C[x] + B[V[x][0]] + fun(V[V[x][0]][c],V[x][0],2,1);
		// if (a<r)
		// {
		// 	r = a;
		// 	k = 2;
		// 	y = 1;
		// }

		
		// rep(i,1,n){
		// 	if (V[i].size()==1)
		// 	{
		// 		x=i;
		// 		break;
		// 	}	
		// }
		
		// P[x] = k;
		// P[V[x][0]] = y;
		// fun(V[V[x][0]][c],V[x][0],k,y);
		// cout<<r<<"\n";
		// rep(i,0,n){
		// 	cout<<P[i]+1<<" ";
		// }

		
	return 0;
}