#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	ll B[100005];
	ll C[100005];
	cin>>t;
	while(t--){
		cin>>n>>m;
		for (int i = 0; i < m+4; ++i)
		{
			C[i]=0;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		for (int j = 0; j < n; ++j)
		{
			cinB[j];
		}


		mx=0;
		while(mx!=n-1){

			for (int i = mx+1; i < n; ++i)
			{
				if (A[mx]<=A[i])
				{
					mx=i;
				}
			}
			C[B[i]]=1;
		}
		
		r=0;
		for (int i = 0; i < m+2; ++i)
		{
			r+=C[i];
		}
		cout<<r<<"\n";
	}
	return 0;
}