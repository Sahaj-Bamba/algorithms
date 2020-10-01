#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	char A[100005];
	cin>>A;
	
	t=strlen(A);

	a=ceil(t/20f);
	b=ceil(1.0*t/a);

	cout<<a<<" "<<b<<"\n";

	for (int i = 0; i < a*b-t; ++i)
	{
		B[i]='*';
	}
	B[i]='\0';
	strcat(A,B);

	for (int i = 0,j=0; i<a ; ++i)
	{
		for (int k = 0; k < b; ++k,++j)
		{
			cout<<A[j];
		}
		cout<<"\n";
	}

	return 0;
}