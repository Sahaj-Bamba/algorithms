#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,y,i,j,k,x,r,t,n,f=0;
	int A[100005];
	cin>>t;
	while(t--){
		f=0;
		cin>>n;
		cin>>r;
		y=0;
		x=1;
		while(x < n){
			a=r;
			for (int i = 0; i < a && x<n ; ++i,++x)
			{
				cin>>b;
				r+=b;
			}
			y++;
		}
		cout<<y<<"\n";
	}
	return 0;
}