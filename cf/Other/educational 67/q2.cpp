#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

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
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l,low,mid,high,ans;
	ll A[mx][26]={{0}};
	ll B[26];
	char str1[mx];
	char str2[mx];

	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;
	cin>>str1;
	A[0][str1[0]-'a']++;
	rep(i,0,n){
		rep(j,0,26){
			A[i][j]=A[i-1][j];
		}
		A[i][str1[i]-'a']++;
	}

	cin>>t;



	//cout<<t;
	while(t--){
		f=0;
		r=0;
		cin>>str2;
		x=strlen(str2);
		mem(B,0);
		rep(i,0,x){
			B[str2[i]-'a']++;
		}
		//cout<<B[0]<<A[0][0];
		low=0;
		high=n;
		ans=n;
		while(low<=high){
			f=0;
			mid=(low+high)/2;
			rep(i,0,26){
				if (B[i]>A[mid][i])
				{
					f=1;
					break;
				}
			}
			if (f==0)
			{
				high=mid-1;
				ans=mid;
			}else{
				low=mid+1;
			}
		}
		
		cout<<ans+1<<"\n";	
	}

	return 0;
}