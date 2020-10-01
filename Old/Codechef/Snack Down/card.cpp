#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,r,t,n,f;
	int A[100005];
	cin>>t;
	while(t--){
		f=0;
		cin>>n;

		for (i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		/*
		for (i = 0; i < n-1; ++i)
		{
			if (A[i]>A[i+1])
			{
				f=1;
				break;
			}
		}
		if (f==0)
		{
			cout<<"YES"<<"\n";
			continue;
		}
		else{
			f=0;*/
			for (i = 0; i < n-1; ++i)
			{
				if (A[i]>A[i+1])
				{
					f++;
				}
			}
			if (f>1)
			{
				cout<<"NO\n";
			}
			else{
				cout<<"YES\n";
			}
		//}
	}
	return 0;
}