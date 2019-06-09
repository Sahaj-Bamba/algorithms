#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005

#define rep(i,n) for(i=0;i<n;i++)
#define invrep(i,n) for (i = n-1; i >=0 ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)

using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pl;

int strcmpp(string a, string b){
	int i=0,d,c;
	c=a.length();
	d=b.length();
	if(c!=d){
		return 1;
	}
	while(i<c&&a[i]==b[i]){
		i++;
	}
	if (i==c)
	{
		return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	fastIO
	ll g,h,a,b,c,f,i,j,k,r,t,n,x,y,z,p,q;

	char B[mx];
	vector<string> C;
	std::vector<pair<ll,ll>> V;
	std::vector<pair<ll,ll>> D;
	vector<string> A;

	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		cin>>B;
		A.pb(B);	
	}
	sort(A.begin(), A.end());

	for (int i = 0; i < t-1; ++i)
	{
		if(strcmpp(A[i],A[i+1])==0){
			A.erase(A.begin()+i);
			i--;
			t--;
		}
	}
	//for(i=0;i<t;i++)	cout<<A[i]<<"\n";
	x=0;
	k=0;
	//cout<<t<<' ';
	for (int j = 0; j < t; ++j)
	{
		r=0;
		f=0;
		for (int i = 0; A[j][i] !='\0' ; ++i)
			{
				if (A[j][i]=='(')
				{
					r++;
				}
				else{
					r--;
				}
			}
		V.push_back(make_pair(r,j));	
	}

	sort(V.begin(), V.end());


	a=0;
	b=t-1;
	z=0;
	while(a<b){
		if (V[a].f>0&&V[b].f>0)
		{
			break;
		}
		if (V[a].f+V[b].f==0)
		{
			//cout<<V[a].s<<" "<<V[b].s<<" "<<V[a].f<<" "<<V[b].f<<"\n";
			f=0;
			r=0;
			for (int i = 0; A[V[b].s][i] != '\0' ; ++i)
			{
				if (A[V[b].s][i]=='(')
				{
					r++;
				}
				else{
					r--;
				}
				if (r<0)
				{
					f=1;
					break;
				}	
			}
			for (int i = 0; A[V[a].s][i] != '\0' ; ++i)
			{
				if (A[V[a].s][i]=='(')
				{
					r++;
				}
				else{
					r--;
				}
				if (r<0)
				{
					f=1;
					break;
				}		
			}

			if(f==0){
				C.pb(A[V[b].s]+A[V[a].s]);
				z++;
			}

			if(V[a].f==V[a+1].f){
				a++;
			}
			else  
			{
				b--;
			}
		}else if (abs(V[a].f)<abs(V[b].f))
		{
			b--;
		}else{
			a++;
		}
	}

	sort(C.begin(), C.end());
	for(i=0;i<z;i++){
		cout<<C[i]<<"\n";
	}
	t=z;
	cout<<z;
	for (int i = 0; i < t-1; ++i)
	{
		if(strcmpp(C[i],C[i+1])==0){
			// C.erase(C.begin()+i);
			 i--;
			 t--;
			 z--;
		}
	}
	
	cout<<z;
	return 0;
}
