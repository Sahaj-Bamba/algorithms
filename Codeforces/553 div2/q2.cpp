#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 505
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
ll ans=0;
ll Par[mx]={0};
vector<pl> V[mx];

ll fun(ll ind,ll res){
    if(ans==1){
        return 1;
    }
    if(ind==N){
        if(res!=0){
            ans=1;
            return 1;
        }else{
        	return 0;
        }
    }
    for(auto i : V[ind]){
        res^=i.f;
        Par[ind]=i.s;
        fun(ind+1,res);
        if(ans==1){
        	return 1;
        }
        res^=i.f;
    }
    return 0;
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
	ll A[mx][mx];
	ll B[mx][mx];
    set<ll> S[mx];
    cin>>n>>m;
    N=n;
    //cout<<"hi";
    rep(i,0,n){
        f=0;
        rep(j,0,m){
            cin>>A[i][j];
            {
                f=1;
                B[i][j]=1;
                if(S[i].count(A[i][j])==0){
                    S[i].insert(A[i][j]);
                    V[i].pb(mp(A[i][j],j+1));
                }
            }
        }
        //if(f==0){
        //    cout<<"NIE";
        //    return 0;
        //}
    }
    //rep(i,0,n){
    //    sort(V[i].begin(),V[i].end());
    //}
    //z=0;
    //rep(i,0,n){
    //    x=V[i].size();
    //    if(x==1&&V[i][0].f==0){
    //        z++;
    //    }
    //}

    //if((n-z)%2==1){
    //    cout<<"TAK\n";
    //    rep(i,0,n){
    //        cout<<V[i][0].s<<" ";
    //    }
    //}else{
        {
        	fun(0,0);
        //cout<<"hi";
        if(ans==1){
            cout<<"TAK\n";
            rep(i,0,n){
                cout<<Par[i]<<" ";
            }
        }else{
            cout<<"NIE";
        }
    }

	return 0;
}