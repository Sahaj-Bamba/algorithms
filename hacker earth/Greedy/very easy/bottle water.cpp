#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	cin>>t;
	while(t--){
		r=0;
		cin>>n>>c;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		while(c>=0&&r<n){
			c-=A[r++];
		}

		cout<<r-1<<"\n";
	}
	return 0;
}