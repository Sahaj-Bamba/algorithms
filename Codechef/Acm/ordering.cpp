#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,r,t,n;
	ll A[3],B[3],C[3];

	cin>>t;
	while(t--){
		r=0;
		a=b=c=0;
		for (i = 0; i < 3; ++i)
		{
			cin>>A[i];
		}
		for (i = 0; i < 3; ++i)
		{
			cin>>B[i];
		}
		for (i = 0; i < 3; ++i)
		{
			cin>>C[i];
		}


		if (A[0]>=B[0]&&A[1]>=B[1]&&A[2]>=B[2])
		{
			if (A[0]>B[0]||A[1]>B[1]||A[2]>B[2])
			{
				a=1;
			}
		}
		else if (B[0]>=A[0]&&B[1]>=A[1]&&B[2]>=A[2]){
			if (B[0]>A[0]||B[1]>A[1]||B[2]>A[2])
			{
				a=1;
			}
		}
		if (a==0)
		{
			cout<<"no\n";
			continue;
		}
		else{
			a=0;
			if (A[0]>=C[0]&&A[1]>=C[1]&&A[2]>=C[2])
			{
				if (A[0]>C[0]||A[1]>C[1]||A[2]>C[2])
				{
					a=1;
				}
			}
			else if (C[0]>=A[0]&&C[1]>=A[1]&&C[2]>=A[2]){
				if (C[0]>A[0]||C[1]>A[1]||C[2]>A[2])
				{
					a=1;
				}
			}
			if (a == 0)
			{
				cout<<"no\n";
				continue;
			}
			else{
				a=0;	
				if (C[0]>=B[0]&&C[1]>=B[1]&&C[2]>=B[2])
				{
					if (C[0]>B[0]||C[1]>B[1]||C[2]>B[2])
					{
						a=1;
					}
				}
				else if (B[0]>=C[0]&&B[1]>=C[1]&&B[2]>=C[2]){
					if (B[0]>C[0]||B[1]>C[1]||B[2]>C[2])
					{
						a=1;
					}
				}
				if (a == 0)
				{
					cout<<"no\n";
					continue;
				}
				else{
					cout<<"yes\n";
					continue;
				}
			}
		}

		if (a==1)
		{
			cout<<"yes\n";	
		}
		else{
			cout<<"no\n";
		}
	}
	return 0;
}