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
	double f;
	cin>>t;
	while(t--){
		r=0;
		cin>>n;
		cin>>k;
		c=n;
		if (n==1)
		{
			cout<<"1.000000";
		}
		else if (n==2)
		{
			cout<<"0.500000";
		}
		else if (ceil(log2(n))<=k)
		{
			cout<<"1.000000";
		}
		else if (ceil(log2(n))==k+1)
		{
			cout<<"0.500000";
		}
		else{
			while(k--){
				
				if (n%2==0)
				{
					n/=2;
					if (n%2==1)
					{
						if (n*2>c)
						{
							n++;							
						}
					}
				}
				else{
					n++;
					n/=2;
				}
				f=1.0/n;
			 	cout<<fixed<<setprecision(6)<<f;
			}
		}
		cout<<"\n";

		// if (n==1)
		// {
		// 	cout<<"1.000000";
		// }
		// else if (k>=(n+1)/2)
		// {
		// 	cout<<"1.000000";
		// }
		// else if ((k+1)>=(n+1)/2){
		// 	cout<<"0.500000";
		// }
		// else{
		// 	n-=k*2;
		// 	f=1.0/n;
		// 	cout<<fixed<<setprecision(6)<<f<<"\n";			//to get output of specific precision
		// }
		
	}
	return 0;
}