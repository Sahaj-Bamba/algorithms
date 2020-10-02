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

struct my_
{
	ll index;
	ll org;
	ll new_;
	ll priority;
} Arr[mx];

bool cmpp1(my_ a, my_ b){
	if(a.priority<b.priority){
		return true;
	}else{
		return false;
	}
}

bool cmpp2(my_ a, my_ b){
	if(a.index<b.index){
		return true;
	}else{
		return false;
	}
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,x,y,z;
	ll n,m,p,q,t;
	ll A[mx];
	memset(A,-1,sizeof(A));
	std::vector<pl> V;
	std::map<ll, ll> map;
	cin>>t;
	while(t--){
		V.clear();
		map.clear();
		f=0;
		r=0;
		cin>>n;
		rep(i,0,n)	cin>>A[i];
		rep(i,0,n){
				Arr[i].index=i;
				Arr[i].org=A[i];
		}
		sort(A,A+n);
		//rep(i,0,n) cout<<A[i]<<" ";
		a=1;
		rep(i,1,n){
			if(A[i]==A[i-1]){
				a++;
			}else{
				V.pb(mp(a,A[i-1]));
				//cout<<a<<" ";
				a=1;
			}
		}
		V.pb(mp(a,A[i-1]));
		a=1;
		sort(V.begin(), V.end());
		x=V.size();
		rep(i,0,x){
			map.insert(pair<ll, ll>(V[i].s,i));
		}
		a=0;
		rep(i,0,x-1){
			//cout<<V[i].f<<" ";
			a+=V[i].f;
		}
		//cout<<a<<" "<<x<<" "<<V[x-1].f<<"\n";
		if (x==1||a<V[x-1].f)
		{
			cout<<"No\n";
		}else{
			cout<<"Yes\n";
			rep(i,0,n){
			
				Arr[i].priority=map[A[i]];
				//cout<<Arr[i].priority;
			}
		
		sort(Arr,Arr+n,cmpp1);
		j=x-1;
		rep(i,0,n){
			if (V[j].f==0)
			{
				break;
			}else{
				V[j].f--;
				Arr[i].new_=V[j].s;
			}
		}
		j=0;
		for(;i<n;i++){
			if (V[j].f==0)
			{
				j++;
			}
				Arr[i].new_=V[j].s;
				V[j].f--;
		}
		sort(Arr,Arr+n,cmpp2);
		rep(i,0,n){
			cout<<Arr[i].new_<<" ";
		}
		cout<<"\n";
	}
}

	return 0;
}