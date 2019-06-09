#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;

	//ll a,b,c,i,j,k,r,t,n,x,y,z,p,q;
	//ll A[100005];
	ll B[6][4]={{0}};
	ll e=0,r=1;			//	Target
	ll x,y;			
	ll p=5,q=2;			//	Original Sizes
	ll f=0;			//	controller

	struct Stack {
		int A[1000];
		int top;
	} s ;

	void disp(){
		ll t,a,b;
		for (int i = 0; i <= s.top; ++i)
		{
			t=s.A[i];
			a=t/10;
			b=t%10;
			cout<<a<<" , "<<b<<"\n";
		}
	}

	void push(int x){
		s.A[++s.top]=x;
	}
	void pop(){
		s.top--;
	}

void solve(int a,int b){

	if (B[a][b]==1)
	{
		return;
	}
	B[a][b]=1;

	if (f==1)
	{
		return;
	}


	if (a==e&&b==r)
	{
		//printf("Reached");
		f=1;
		disp();
		return;
	}

	//	Empty B
	push(a*10+0);
	solve(a,0);
	pop();

	//	Empty A
	push(b);
	solve(0,b);
	pop();

	//	A to B
	if(a>q-b){
		x=a-(q-b);
		y=q;
	}
	else{
		x=0;
		y=b+a;
	}
	push(10*x+y);
	solve(x,y);
	pop();

	//	B to A
	if(b>p-a){
		x=p;
		y=b-(p-a);
	}
	else{
		x=a+b;
		y=0;
	}
	push(10*x+y);
	solve(x,y);
	pop();

}


int main(int argc, char const *argv[])
{
	fastIO
	ll t,a,b;
	s.top=-1;
	push(50);
	solve(5,0);
	/*
	while(!s.empty()){
		t=s.top();
		a=t/10;
		b=t%10;
		cout<<a<<" , "<<b<<"\n";
	}
	*/
/*
	queue<pair<ll,ll>> Q;
	ll target = 1;
	Q.push(make_pair(5,0));

	//	original sizes
	p=5;
	q=2;

	while(!Q.empty()){

		pair<ll,ll> B = Q.front();
		
		a=B.first;
		b=b.second;

		//	Empty B
		x=a;
		y=0;


		//	Empty A
		x=0;
		y=b;

		//	A to B
		if(a>q-b){
			x=a-(q-b);
			y=q;
		}
		else{
			x=0;
			y=b+a;
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


		Q.push(make_pair(x,y));


	}
*/

	return 0;
}