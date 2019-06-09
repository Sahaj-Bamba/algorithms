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
	ll B[100005];
	cin>>t;
		r=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		for (int i = 0; i < n-1; ++i)
		{
			if (A[i]<A[i+1])
			{
				B[i]=1;
				while(i<n-1&&A[i]<A[i+1]){
					i++;
				}
				i--;
			}
			if (A[i]>A[i+1])
			{
				B[i]=5;
				while(i<n-1&&A[i]>A[i+1]){
					i++;
				}
				i--;
			}

		}

		cout<<r<<"\n";
	return 0;
}