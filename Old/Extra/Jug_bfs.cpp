#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;

	//ll a,b,c,i,j,k,r,t,n,x,y,z,p,q;
	
	int C[1000005];

	ll B[5][3]={0};
	ll e=0,r=1;			//	Target
	ll x,y;			//	Target
	ll p=5,q=2;			//	Original Sizes
	ll f=0;			//	controller



int main(int argc, char const *argv[])
{
	fastIO
	ll t,a,b,l=0;

	queue<ll> Q;
	Q.push(50);
	C[l++]=50;
	//	original sizes

	while(!Q.empty()){

	t = Q.front();
		
		a=t/10;
		b=t%10;

	Q.pop();



		//	Empty B
		x=a;
		y=0;
		Q.push(10*x+y);
		C[l++]=10*x+y;
	if (x==e&&y==r)
	{
								//	printf("Reached");
								//	disp();

/*		while(C[l]!=e*10+r){
			l--;
		}
*/		
		while(l){
			cout<<C[l]<<"\n";
			l--;
			l/=4;
		}

		cout<<C[l]<<"\n";

		break;
	}

		//	Empty A
		x=0;
		y=b;
		Q.push(10*x+y);
		C[l++]=10*x+y;
	if (x==e&&y==r)
	{
								//	printf("Reached");
								//	disp();

/*		while(C[l]!=e*10+r){
			l--;
		}
*/		
		while(l){
			cout<<C[l]<<"\n";
			l--;
			l/=4;
		}

		cout<<C[l]<<"\n";

		break;
	}

		//	A to B
		if(a>q-b){
			x=a-(q-b);
			y=q;
		}
		else{
			x=0;
			y=b+a;
		}
		Q.push(10*x+y);
		C[l++]=10*x+y;
	if (x==e&&y==r)
	{
								//	printf("Reached");
								//	disp();

/*		while(C[l]!=e*10+r){
			l--;
		}
*/		
		while(l){
			cout<<C[l]<<"\n";
			l--;
			l/=4;
		}

		cout<<C[l]<<"\n";

		break;
	}

		//	B to A
		if(b>p-a){
			x=p;
			y=b-(p-a);
		}
		else{
			x=a+b;
			y=0;
		}
		Q.push(10*x+y);
		C[l++]=10*x+y;
	}
	if (x==e&&y==r)
	{
								//	printf("Reached");
								//	disp();

/*		while(C[l]!=e*10+r){
			l--;
		}
*/		
		while(l){
			cout<<C[l]<<"\n";
			l--;
			l/=4;
		}

		cout<<C[l]<<"\n";

		break;
	}


	return 0;
}