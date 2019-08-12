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
	char A[mx];
	ll B[30]={0};
	set<char> S;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	
		f=0;
		r=0;
	
		cin>>n;
		cin>>A;
		r=0;
		ll ans=0;
		rep(i,0,n){
//			cout<<i<<A[i]<<" ";
			//cout<<"Hi";
			if (isupper(A[i]))
			{
					mem(B,0);
				ans=max(ans,r);
				r=0;
			}else{
				//cout<<"hi";
				if (B[A[i]-'a']==0)
				{
//					cout<<r<<" ";
//					//cout<<"Hi";
					r++;
					B[A[i]-'a'] = 1;
				}else{
					//cout<<r;
					

									}
			}
//			cout<<"\n";
		}
			ans=max(ans,r);
				
		cout<<ans<<"\n";	
	
	return 0;
}