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
vector<ll> V[mx];
bool take;
bool take2;
ll num;
ll res;
ll A[mx];
ll B[mx];
ll P[mx];

ll fun3(ll,ll);

ll fun(ll a){
// cout<<"hi"<<B[1]<<" ";
	
	fun3(1,0);
	return B[a];

}

void parr(ll nod,ll par){
	P[nod]=par;
	for ( ll x : V[nod] ){
		if (x==par)
		{
			continue;
		}
		parr(x,nod);
	}
}

void update(ll a){
	if (a==0){
		return;
	}else{
		B[a]=0;
		update(P[a]);
	}
}

/*
void fun2(ll nod,ll par){

	for ( ll x : V[nod] ){
		if (take2)
		{
			return;
		}
		if (x==par)
		{
			continue;
		}
		if (x == num)
		{
			take = true;
			res += A[x]*A[x];
			fun2(x,nod);
			take = false;
			take2 = true;
			break;
		}
		if (take)
		{
			res += A[x]*A[x];
		}
		fun2(x,nod);
	}

}*/

ll fun3(ll nod,ll par){
	if(B[nod]!=0){
		return B[nod];
	}
	B[nod] = A[nod]*A[nod];
	for ( ll x : V[nod] ){
		if (x==par)
		{
			continue;
		}
		B[nod] += fun3(x,nod);
	}
	return B[nod];
}


int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("../../input","r",stdin);
		freopen("../../output","w",stdout);
    	// #define mx 100005
    #else
		// #define mx 1000005
    #endif

	fastIO
	
	ll a,b,c,d,e,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t,l;
	
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	
	cin>>n;
	N=n;
	rep(i,1,n+1){
		cin>>A[i];
	}

	rep(i,0,n-1){
		cin>>a>>b;
		V[a].pb(b);
		V[b].pb(a);
	}

	parr(1,0);
	fun(1);

	cin>>t;

	while(t--){
		cin>>x;
		if (x==1)
		{
			cin>>a>>b;
			A[a]=b;
			update(a);
		}else{
			cin>>a;
		//	cout<<a;
			cout<<fun(a)<<"\n";
		}
	}

	return 0;
}