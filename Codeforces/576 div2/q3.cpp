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
	ll n,m,p,q,t,l;
	ll A[mx];
	ll B[mx];
	map<ll,ll> M;
	memset(A,-1,sizeof(A));
	a=b=c=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;

	set<ll> X;

	cin>>n>>x;
	
		f=0;
		r=0;

		rep(i,0,n){
			cin>>A[i];
			X.insert(A[i]);
			if (M.find(A[i])==M.end())
			{
				M.insert(mp(A[i],1));
			}else{
				M[A[i]]++;
			}
		}

	y=X.size();

	x*=8;

	x/=n;
	if (x>30)
	{
		cout<<0;
		return 0;
	}

	x=pow(2,x);
	//cout<<x<<" ";
	if (y<=x)
	{
		cout<<0;
		return 0;
	}

	z=y-x;
	
	r=0;
	p=0;
	f=0;
	for(auto H : M){
		B[f++]=H.second;	
	}
	
	for(auto H : M){
		r+=H.second;
		p++;
		if (p==z)
		{
			break;
		}
	}
	q=r;
	// cout<<B[0]<<" "<<B[1]<<" "<<B[2]<<" "<<B[3]<<" \n";
	// cout<<q<<" "<<z<<" ";
	
	for(i=0;i<z;i++){
		r-=B[z-(i+1)];
		r+=B[f-(i+1)];
		q=min(q,r);
	//	cout<<q<<" "<<r<<"\n";
		
	}

		cout<<q<<"\n";	

	return 0;
}