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
	string S;
	a=b=c=d=i=j=k=f=r=x=y=z=n=m=p=q=t=l=0;
	ll A[10][10][10][10];
	queue<ll> Q;
	mem(A,0);
	cin>>S;

	rep(i,0,10){
		rep(j,0,10){
			rep(k,0,10){
				Q.push(k);
				while(!(Q.empty())){
					x=Q.front();
					if (i!=0 && A[i][j][k][(x+i)%10] == 0)
					{
						A[i][j][k][(x+i)%10] = A[i][j][k][x] + 1;
						Q.push((x+i)%10);
					}
					if (j!=0 && A[i][j][k][(x+j)%10] == 0)
					{
						A[i][j][k][(x+j)%10] = A[i][j][k][x] + 1;
						Q.push((x+j)%10);
					}
					Q.pop();
				}
			}
		}
	}
	
	n = S.size();
	f=0;

	rep(i,0,10){
		rep(j,0,10){
			r=0;
			rep(k,0,n-1){
				// cout<<A[i][j][S[k]-'0'][S[k+1]-'0']<<" ";
				if (S[k]==S[k+1])
				{
					if (i==0||j==0)
					{
						r+=1;
						continue;
					}
				}
				if (A[i][j][S[k]-'0'][S[k+1]-'0'] == 0)
				{
					r=n-2;
					break;
				}else{
					r+=A[i][j][S[k]-'0'][S[k+1]-'0'];
				}
			}
			// cout<<"\t";
			cout<<r-(n-1)<<" ";
		}
		cout<<"\n";
	}

	return 0;
}