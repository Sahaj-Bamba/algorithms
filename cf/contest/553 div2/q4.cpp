#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
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

bool cmp(pl a,pl b){
    if ((a.f-a.s)<(b.f-b.s))
    {
        return false;
        /* code */
    }
    return true;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("../../input","r",stdin);
    freopen("../../output","w",stdout);
    #endif
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	pl A[mx];
	ll B[mx];

	cin>>n;
	r=0;
    rep(i,0,n){
        cin>>a>>b;
        r+=b*n;
        r-=a;
        B[i]=a-b;
    }
    cout<<r;
    sort(B,B+n,greater<ll>());
    rep(i,0,n){
        r+=(B[i])*(i+1);
    }
    cout<<r<<"\n";
	return 0;
}