#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef int ll;

	//ll a,b,c,i,j,k,r,t,n,x,y,z,p,q;
	//ll A[100005];

	bool controller = false;

	int M[1000005][3][3];
	int Ms=0;

	int initial[3][3] = {{},{},{}};
	ll initial_pos;

	ll final[3][3] = {{},{},{}}; 
	ll final_pos;

	struct Stack{
		int A[100005];
		int top=-1;
	}s;

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

	bool check(int A[3][3]){
		bool f=false;
		for (int i = 0; i < Ms; ++i)
		{
			f = true;
			for (int j = 0; j < 3; ++j)
			{
				for (int k = 0; k < 3; ++k)
				{
					if (A[j][k] != M[i][j][k])
					{
						f=false;
						break;
					}
				}
			}
			if (f==true)
			{
				return f;
			}
		}
		return f;
	}

	void visit(int A[3][3]){
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				M[Ms][i][j]=A[i][j];
			}
		}
		Ms++;
	}

	bool goal(int A[3][3]){
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (A[i][j] != final[i][j])
				{
					return false;
				}
			}
		}
		return true;
	}


void solve(int A[3][3],int b){

	if (check(A))
	{
		return;
	}

	visit(A);

	if (controller)
	{
		return;
	}


	if (goal(A))
	{
		controller = true;
		disp();
		return;
	}

	//	Achievable States
	int x,y,z;
	x=b/3;
	y=b%3;


	//	left shift
	if (y>=1)
	{
		z=A[x][y-1];
		A[x][y-1]=A[x][y];
		A[x][y]=z;
	}
	push(b*10+b-1);
	b--;
	
	solve(A,b);
	
	b++;
	pop();
		z=A[x][y-1];
		A[x][y-1]=A[x][y];
		A[x][y]=z;
	
	//	right shift
	if (y<=1)
	{
		z=A[x][y+1];
		A[x][y+1]=A[x][y];
		A[x][y]=z;
	}
	push(b*10+b+1);
	b++;
	
	solve(A,b);
	
	b--;
	pop();
		z=A[x][y+1];
		A[x][y+1]=A[x][y];
		A[x][y]=z;
	

	//	top shift
	if (x>=1)
	{
		z=A[x-1][y];
		A[x-1][y]=A[x][y];
		A[x][y]=z;
	}
	push(b*10+b-3);
	b-=3;
	
	solve(A,b);
	
	b+=3;
	pop();
		z=A[x-1][y];
		A[x-1][y]=A[x][y];
		A[x][y]=z;
	
	//	bottom shift
	if (x<=1)
	{
		z=A[x+1][y];
		A[x+1][y]=A[x][y];
		A[x][y]=z;
	}
	push(b*10+b+3);
	b+=3;
	
	solve(A,b);
	
	b-=3;
	pop();
		z=A[x+1][y];
		A[x+1][y]=A[x][y];
		A[x][y]=z;

}


int main(int argc, char const *argv[])
{
	fastIO
	push(initial_pos);
	solve(initial,initial_pos);
	if (controller == false)
	{
		cout<<"No Solution found";
	}
	
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