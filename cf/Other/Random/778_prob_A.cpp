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
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	#define mx 100005
    #else
		#define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll left,right,mid,ans;
	string A;
	string B;
	ll C[mx];
	set<ll> Rem;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>A;
	cin>>B;

	n = A.size();
	rep(i,0,n){
		cin>>C[i];
		C[i]--;
	}
	c = B.size();
	left = 0;
	right = n-1;
	mid=(left+right)/2;
	rep(i,0,mid+1){
		Rem.insert(C[i]);
	}
	// cout<<mid;
	// cout<<Rem.size();
	//cout<<c;
	while(left <= right){
		f=0;
		j=0;
		rep(i,0,n){
			if (Rem.count(i)==1)
			{
				continue;
			}
			if (A[i] == B[j])
			{
				//cout<<i<<" ";
				j++;
				if (j == c)
				{
					break;
				}
			}
		}
		if (j == c)
		{
			left = mid+1;
			mid = (left+right)/2;
			ans = Rem.size();
			//cout<<ans<<Rem.size()<<mid<<" ";
			rep(i,left,mid+1){
				Rem.insert(C[i]);
			}
		}
		else{
			right = mid-1;
			mid = (left+right)/2;
			invrep(i,right+2,mid+1){
				Rem.erase(C[i]);
			}
		}
	}

	cout<<ans<<"\n";

	return 0;
}