#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;


ll Prime[1000006]={0}

void prime_seive(int n){

	for (int i = 2; i < n; ++i)
	{
		if (Prime[i]==0)
		{
			for (int j = 2*i; j < n; j+=i)
			{
				Prime[j]++;
			}
		}
	}

}

bool check_prime(int n){
	if (Prime[n]==0)
	{
		return true;
	}
	else{
		return false;
	}
}


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,r,t,n;
	ll A[100005];
	cin>>t;
		r=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
	a=n;
	do
		{
			if (check_prime(a))
			{
				break;
			}
		} while (a--);	


		b=0;
		for (int i = 0; i < a; ++i)
		{
			b+=A[i];
		}
		c=b;
		//i--;
		for (int j = 0; i < n; ++i,++j)
		{
			c-=A[j];
			c+=A[i];
			if (c>b)
			{
				b=c;
			}
		}

		cout<<b<<"\n";
	
	return 0;
}
