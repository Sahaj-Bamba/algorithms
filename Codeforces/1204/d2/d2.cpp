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
	string A;
	std::vector<ll> V;
	std::vector<ll> V2;
	char ch;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>A;

	n = A.size();
	a=1;
	ch = A[0];
	rep(i,1,n){
		if (ch == A[i])
		{
			a++;
		}else{
			V.pb(a);
			a=1;
		}
		ch = A[i];
	}

	V.pb(a);

	n = V.size();
	V.pb(0);
	i=0;
	f=0;
	if (A[0]=='0')
	{
		i++;
		f=1;
	}
	x=0;
	V2 = V;
	for(;i<n;i++){
		if (i%2==f)
		{
			if (V[i]>=V[i+1])
			{
				if (i==0)
				{
					x+=V[i]-V[i+1];
					V[i] = V[i+1];
					continue;
				}
				V[i-1]+=V[i]-V[i+1];
				V[i]=V[i+1];
			}else{
				if (i==0)
				{
					continue;
				}
				j=i;
				a = V[i+1] - V[j];
				j-=3;
				while(j>=0 && a>0){
					if (a>(V[j]-V2[j]))
					{
						V[j+1]+=(V[j]-V2[j]);
						a-=(V[j]-V2[j]);
						V[j]=V2[j];
						j-=2;
					}else{
						V[j+1]+=a;
						V[j]-=a;
						a = 0;
						j-=2;
					}
				}
				if (a>0&&x>0)
				{
					if (x>=a)
					{
						x-=a;
						V[0]+=a;
					}else{
						V[0]+=x;
						x=0;
					}
				}
			}
		}else{
			continue;
		}
	}
	n = V.size();
	rep(i,0,x){
		cout<<0;
	}
	rep(i,0,n){
		if (i%2==f)
		{
			rep(j,0,V[i]){
				cout<<1;
			}
		}else{
			rep(j,0,V[i]){
				cout<<0;
			}
		}
	}

	cout<<"\n";

	return 0;
}