#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,y,i,j,k,x,r,t,n,f=0;
	int A[1000005];
	cin>>t;
	while(t--){
		
		for (int i = 0; i < 1000005; ++i)
		{
			A[i] = 0;
		}

		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>a;
			A[a]++;
		}
		r=1;
		x=0;
		//cout<<A[2]<<" "<<x<<" ";
		for (int i = 1; i < 1000001; ++i)
		{
			//if(r!=1){
			//	cout<<r<<"  ";
			//}
			
			a=1;
			if (A[i] == 0){
				continue;
			}
			if (A[i] == 1)
			{
				x++;
				continue;
			}
			if (A[i] == 2)
			{
				x+=2;
				continue;
			}
			else{
				
				
				if (x%2 == 0)
				{
					x+=A[i];
		//			cout<<"hi";
					if (A[i]%2 == 0)
					{
						while(A[i]){
							a*=((A[i]*(A[i]-1))/2)%mod;
							a%=mod;
							A[i]-=2;
						}
					}
					else{
						a*=A[i]--;
						a%=mod;
						while(A[i]){
							a*=((A[i]*(A[i]-1))/2)%mod;
							if(i==2){
							//	cout<<a;
							}
							a%=mod;
							A[i]-=2;
						}
					}
				}
				else{
					x+=A[i];
					if (A[i]%2 == 0)
					{
						a*=A[i]*(A[i]-1);
						a%=mod;
						A[i]-=2;
						while(A[i]){
							a*=((A[i]*(A[i]-1))/2)%mod;
							a%=mod;
							A[i]-=2;
						}
					}
					else{
						a*=A[i]--;
						a%=mod;
						while(A[i]){
							a*=((A[i]*(A[i]-1))/2)%mod;
							a%=mod;
							A[i]-=2;
						}
					}
				}
			}
			r*=a;
			r%=mod;
			if(i==2){
		//		cout<<a<<" ";
			}
		}
		cout<<r<<"\n";	
	}
	return 0;
}