#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z;
	ll A[mx];
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		

		cout<<r<<"\n";
	}
	return 0;
}