#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,r,t,n;
	int A[100005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		r=k;
		for (int i = k ; i < n; ++i)
		{
			if (A[i] == A[k-1])
			{
				r++;
			}
			else
				break;
		}
		cout<<k<<"\n";
	}
	return 0;
}