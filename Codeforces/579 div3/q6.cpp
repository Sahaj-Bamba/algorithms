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

bool cm(pl a,pl b){
	if (a.s<0 && b.s<0)
	{
		if (a.f>b.f)
		{
			return true;
		}else if(a.f<b.f){
			return false;
		}else{
			if (a.s>=b.s)
			{
				return true;
			}else{
				return false;
			}
		}
	}
	if (a.s<0 && b.s>=0)
	{
		return false;
	}
	if (a.s>=0 && b.s<0)
	{
		return true;
	}
	if (a.s>=0 && b.s>=0)
	{
		if (a.f>b.f)
		{
			return false;
		}else{
			return true;
		}
	}
	return true;
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
	pl A[mx];
	
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>n>>r;
		rep(i,0,n){
			cin>>A[i].f>>A[i].s;
		}	
		sort(A,A+n,cm);
		rep(i,0,n){
			cout<<A[i].f<<" "<<A[i].s<<" ";
			cout<<"\n";
		}
		ll Vis[mx]={0};
		rep(i,0,n){
			if (A[i].s>0)
			{
				if (r>=A[i].f)
				{
					r+=A[i].s;
				}else{
					f=1;
					break;
				}	
			}else{
				if (Vis[i]==1)
				{
					continue;
				}
				a=i;
				j=i+1;
				while(j<n && r + A[j].s >= A[i].f){
					a = i; 
				}

				if (r>=A[a].f)
				{
					r+=A[a].s;
					Vis[a]=1;
					i--;
				}else{
					f=1;
					break;
				}
			}
		}
		
		if (f==0)
			{
				cout<<"YES\n";
			}else{
				cout<<"NO\n";
			}	
	
	return 0;
}