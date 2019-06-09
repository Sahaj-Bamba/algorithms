#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 2000005
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,f,i,j,k,r,t,n,x,y,z;
	pair <ll,ll> A[1005],B[1005];

	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		A[i]=make_pair(a,b);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>a>>b;
		B[i]=make_pair(a,b);
	}
	sort(A,A+n);
	sort(B,B+n);
	a=A[0].first+B[n-1].first;
	b=A[0].second+B[n-1].second;
	cout<<a<<" "<<b;
	return 0;
}