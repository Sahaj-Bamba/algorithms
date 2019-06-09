#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,C,n;
	int i,j;
	int a,r;
	cin>>N>>C;
	n=1;
	while((n*(n+1))/2 < N) {
		n++;
	}
	i=0;
	a=0;
	j=0;
	while(a==0){
		i+=(n-j);
		if(i>N){
			break;
		}
		j++;
		cout<<"1 "<<i<<endl;
		cin>>a;
	}
	if (i<=N)
	{
		cout<<2<<endl;
	}
	i-=(n-j);
	a=0;
	while(a==0){
		cout<<"1 "<<i;
		cin>>a;
		if(a!=0){
			break;
		}
		i++;	
	}
	cout<<2<<endl;

	cout<<"3 "<<i;
}