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

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../input","r",stdin);
		// freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[105][105];
	std::vector<ll> Adj[105];
	ll B[mx];
	char ch;

	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	stack<ll> St,S2;
	queue<ll> Q,Q2;

	std::vector<ll> V;
	std::map<ll, ll> M;
	std::map<ll, ll> M2;
	cin>>n;

	rep(i,1,n+1){
		rep(j,1,n+1){
			cin>>ch;
			A[i][j] = ch - '0';
			if (ch == '1')
			{
				Adj[i].pb(j);
			}
		}
	}


	cin>>x;

	rep(i,0,x){
		cin>>B[i];
	}



	rep(i,0,x){

		V.pb(B[i]);
		St = S2;
		Q = Q2;
		M.clear();
		M2.clear();

		Q.push(B[i]);
		b=1;
		M[B[i]]++;
		M2[B[i]]++;
		while(!Q.empty()){
			a = Q.front();
			Q.pop();
			for(auto X : Adj[a]){
				if (M2.find(X) == M2.end())
				{	
					if (i+b!=n && X == B[i+b])
					{
						b++;
						St.push(X);
						M[X]++;
					}
					M2[X]++;
					Q.push(X);
				}else{
					if (M.find(X) == M.end())
					{
						continue;
					}else{
						i+=b-3;
					}
				}
			}
		}



	}

	cout<<V.size();
	cout<<"\n";
	for(auto X : V){
		cout<<X<<" ";
	}


	return 0;
}