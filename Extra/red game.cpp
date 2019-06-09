#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n,l,ans,x,y,z;
	ll A[60];
	ll B[2505];
	cin>>t;
	while(t--){
		r=0;
		ans=0;
		cin>>n>>k;
		for (i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		for (i = 0; A[i] <= k; ++i)
		{
			ans+=A[i];
		}
		ans+=(n-i)*k;

/*
		for (; i < n-1; ++i)
		{
			a=A[i+1]-A[i];
			A[i+1]=a+k;
		}
		ans+=A[i]-k;
*/

		l=i;
		r=n-2;

		

		while(l<r){
			for (i = l+1, x=0; i < r+1; ++i,++x)
			{
				B[x] = A[i]-A[i-1];
			}
			y=l;
			z=B[0];
			for (i = 1; i < x; ++i)
			{
				if (z<B[i])
				{
					z=B[i];
					y=l+i;
				}
			}
			a=z;
			if (a == 0){
				l+=2;
				A[y] = A[l];
				A[y+1] = A[l+1];
			}
			else{
				l++;
				A[y]=k+a;
				A[y+1] = A[l-1];
			}
			sort(A+l,A+r+1);
		}
		a=A[r+1]-A[r];

		ans+=a;


		//	main





		cout<<ans<<"\n";
	}
	return 0;
}