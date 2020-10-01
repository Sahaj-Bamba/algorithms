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

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		// freopen("../../../input","r",stdin);
		// freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	ll R,C,offR,offC;
	ll A[mx];
	std::vector<ll> VR[mx];
	std::vector<ll> VC[mx];
	set<pl> S;
	memset(A,0,sizeof(A));
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n>>m>>k;
	R=n;
	C=m;
		rep(i,0,k){
			cin>>a>>b;
			S.insert(mp(a,b));
			VR[a].pb(b);
			VC[b].pb(a);
		}

		rep(i,1,n+1){
			VR[i].pb(m);
			sort(VR[i].begin(), VR[i].end());
		}
		rep(i,1,m+1){
			VR[i].pb(n);
			sort(VC[i].begin(), VC[i].end());
		}

	offR=offC=0;
	f=0;
	x=0;
	while(true){

			// rep(i , offC + 1 , m+1){
			// 	if (S.count(mp(offR + 1,i))==1)
			// 	{	
			// 		break;
			// 	}
			// 	f=1;
			// 	k++;
			// 	S.insert(mp(offR + 1,i));
			// }

			i = VR[offR+1][0];
			p = i - OffC;

			k += p;


			// x++;		
		// }else{
		// 	rep(i , offC + 2 , n+1){
		// 		if (S.count(mp(offR + 1,i))==1)
		// 		{	
		// 			break;
		// 		}
		// 		f=1;
		// 		k++;
		// 		S.insert(mp(offR + 1,i));
		// 	}		
		// }

		// if (f==0)
		// {
		// 	break;
		// }
		// f=0;
		// cout<<"--"<<i<<k;

		// i--;
		// rep(j,offR+2,n+1){
		// 	if (S.count(mp(j,i))==1)
		// 	{
		// 		break;
		// 	}
		// 	f=1;
		// 	k++;
		// 	S.insert(mp(j,i));
		// }
		// j--;
		// if (f==0)
		// {
		// 	break;
		// }
		// f=0;
		// cout<<j<<k;


			
			
		invrep(a,i,1){
			if (S.count(mp(j,a))==1)
			{
				break;
			}
			f=1;
			k++;
			S.insert(mp(j,a));
		}
		if (f==0)
		{
			break;
		}
		f=0;
		// cout<<a<<k;
		a++;
		invrep(b,j,1){
			if (S.count(mp(b,a))==1)
			{
				break;
			}
			f=1;
			k++;
			S.insert(mp(b,a));
		}
		if (f==0)
		{
			break;
		}
		f=0;

		b++;
		// cout<<b<<a<<" ";
		offR = b-1;
		offC = a;
		// cout<<k<<offR<<offC;
	}
	// cout<<k;
	if (k == n*m)
	{
		cout<<"Yes";
	}else{
		cout<<"No";
	}

	return 0;
}