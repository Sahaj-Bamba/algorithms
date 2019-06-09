#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char A[60];
	ll B[60];
	cin>>t;
	while(t--){
		cin>>A;
		for (i = 0; i < 60; ++i)
		{
			B[i] = 0;
		}
		r=0;
		for (i = 0; A[i] != '\0' ; ++i)
		{
			if (A[i] == '.')
			{
				continue;
			}
			else{
				a=A[i]-'0';
				j=i-a;
				for(k=0;j<n&&k<2*a+1;j++,k++){
					if (j<0)
					{
						continue;
					}
					B[j]++;
				}
			}
		}
		for (i = 0; i < 52; ++i)
		{
			if (B[i]>1)
			{
				r=1;
				break;
			}
		}
		if (r==1)
		{
			cout<<"unsafe\n";
		}
		else{
			cout<<"safe\n";
		}
	}
	return 0;
}