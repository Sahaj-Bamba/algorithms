#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,d,e,f,i,j,k,r,t,n;
	ll A[100005];
	ll B[100005];
	ll C[100005];
	ll D[100005];
	ll E[100005];
	cin>>t;
	while(t--){
		f=0;
		cin>>n;
		for (i = 0; i < n; ++i)
		{
			cin>>A[i];
			C[i]=A[i];
		}
		sort(A,A+n);
		for (i = 0,b=0; i < n-1; ++i)
		{
			if (A[i]==A[i+1])
			{
				B[b++]=A[i];
			}
			while(i<n-1&&A[i]==A[i+1]){
				i++;
			}
			i--;
		}
		
		for (i = 0; i < b; ++i)
		{
			f=0;
			for (j = 0,d=0; j < n; ++j)
			{
				if (C[j]==B[i])
				{
					D[d++]=j;
				}
			}

			for (j = 0; j < d; ++i)
			{
				if (binary_search(A, A + n, D[j]))
				{
					f++;
				}
				if (f==2)
				{
					break;
				}
			}
			if (f==2)
			{
				break;
			}
		}

		if (f==2)
		{
			cout<<"Truly Happy\n";
		}
		else{
			cout<<"Poor Chef\n";
		}
	}
	return 0;
}