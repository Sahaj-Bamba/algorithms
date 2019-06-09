#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[1005];
	cin>>t;
	while(t--){

		cin>>n>>p>>q;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		i=1;
		while(1){
			z=A[n-i];
			x=z/2;
			for (i = 0; i < n; ++i)
			{
				if (x<A[i])
				{
					x=A[i-1];
					break;
				}
			}
			
		}
		

		cout<<r<<"\n";
	}
	return 0;
}