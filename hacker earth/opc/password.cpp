#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char A[105];
	int B[105]={0};
	cin>>A;
	n=strlen(A);
	if (n>62)
	{
		cout<<"-1";
	}
	else{
		for (int i = 0; i < n; ++i)
		{
			if (A[i]<='z'&&A[i]>='a')
			{
				B[A[i]-'a']++;
			}
			else if (A[i]<='9'&&A[i]>='0')
			{
				B[A[i]-'0'+52]++;
			}
			else{
				B[A[i]-'A'+26]++;
			}
		}
		r=0;
		for (int i = 0; i < 62; ++i)
		{
			if (B[i]>1)
			{
				r+=B[i]-1;
			}
		}
		cout<<r;
	}
	
	return 0;
}