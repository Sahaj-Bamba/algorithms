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
		freopen("../../../input","r",stdin);
		freopen("../../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	pair<pl,ll> A[mx];
	std::map<ll,std::vector<pl>> M;
	std::map<ll,std::vector<pl>> M2;
	
		pl S;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>t;
	
	while(t--){
		
		M.clear();
	
		f=0;
		r=0;
	
		cin>>n;
		rep(i,0,n){
			cin>>a>>b>>c;
			// cin>>A[i].f.f;
			// cin>>A[i].f.s;
			// cin>>A[i].s;
			// a = A[i].f.f;
			// b = A[i].f.s;
			// c = A[i].s;
			// f = 1;
			// if(M.find(c)==M.end()){
			// 	M[c].pb(mp(a,b));
			// 	continue;		
			// }
			// cout<<"Hi";
			M[c].pb(mp(a,b));
		}	
		for (auto P : M)
		{
			sort(P.s.begin(), P.s.end());
			for (auto Q : P.s){
				f=0;
				S = Q;
				for (auto R : P.s){
					// cout << S.f<<" "<<S.s<<" "<<R.f<<" "<<R.s<<" \n";
					if ( ( ( (S.f <= R.s) && (S.f >= R.f)) || ( (S.s <= R.s) && (S.s >= R.f)) ) || ( ( (R.f <= S.s) && (R.f >= S.f)) || ( (R.s <= S.s) && (R.s >= S.f)) ) ) 
					{
						// cout<<"Hi";
						f++;
						S.f = min(S.f,R.f);
						S.s = max(S.s,R.s);
						// cout<<A[i].f.f<<" "<<A[i].f.s<<" ";
					}
				}
				// cout<<f;
				if (f>=3)
				{
					r=1;
				}
			}
		}

		// for (auto P : M[A[i].s])
		// 	{
		// 		if ( ( (P.f <= A[i].f.s) && (P.f >= A[i].f.f)) || ( (P.s <= A[i].f.s) && (P.s >= A[i].f.f)) )
		// 		{
		// 			f++;
		// 			A[i].f.f = min(A[i].f.f,P.f);
		// 			A[i].f.s = max(A[i].f.s,P.s);
		// 			cout<<A[i].f.f<<" "<<A[i].f.s<<" ";
		// 		}
		// 	}
		// 	cout<<" "<<f<<" \n";
			// if (f==3)
			// {
			// 	r=1;
			// }
			
		if (r!=1)	
		{
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

		// cout<<<<"\n";	
	}

	return 0;
}