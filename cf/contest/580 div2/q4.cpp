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

std::vector<ll> V[64];
std::map<ll, std::vector<ll>> ML;
std::vector<ll> V2;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll A[mx];
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	std::map<ll, ll> M3;

	cin>>n;
	// cout<<n;
	rep(i,0,n){
		cin>>A[i];
		M3[A[i]]++;
		rep(j,0,64){
			if ((A[i]>>j) & 1)
			{
				V[j].pb(A[i]);
				//cout<<i;
			}
		}
	}
	f=0;

	rep(i,0,64){
		// cout<<V[i].size();
		if (V[i].size()>=3)
		{
			f=1;
			break;
		}
	}	

	if (f==1)
	{
		cout<<"3\n";
		return 0;
	}



	rep(i,0,64){
		for(auto X : V[i]){
			if (M3[X] == 0)
			{
				continue;
			}
			M3[X]--;
			V2.pb(X);
		}
	}


	n= V2.size();

	rep(i,0,n){
		rep(j,i+1,n){
			if (((V2[i])&(V2[j])) != 0)
			{
				cout<<V2[i]<<" "<<V2[j]<<"\n";
				ML[V2[i]].pb(V2[j]);
				ML[V2[j]].pb(V2[i]);
			}
		}
	}

	queue<ll> Q;
	queue<ll> Q2;
	std::map<ll, ll> M;
	x=0;
	r=-2;
	rep(i,0,n){
		Q = Q2;
		M.clear();
		Q.push(A[i]);
		M[A[i]] = 0;
		f=0;

		while(!(Q.empty())){
			a = Q.front();
			Q.pop();
			for(auto X : ML[a]){
				if (M.find(X) == M.end())
				{
					Q.push(X);
					M[X] = M[a] + 1;
				}else{
					M[X] = M[a] + 1;
					if (M[X] <= 2)
					{
						continue;
					}else{
						r=max(r,M[X]);
						f=1;
						break;
					}
				}
			}
			if (f==1)
			{
				break;
			}
		}

	}

	// cout<<"hi";
	cout<<r<<"\n";


	return 0;
}