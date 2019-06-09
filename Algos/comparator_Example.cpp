#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 100005

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

struct str
{
	ll age;
	char name[25];
	ll index1;
	ll index2;
};

bool cmp(str a,str b){
	if (a.age<b.age)
	{
		return true;
	}else if(a.age>b.age){
		return false;
	}else{
		if(strcmp(b.name,a.name)<0){
			return false;
		}else
		{
			return true;
		}
	}
}
bool cmp2(str a,str b){
	if (a.age<b.age)
	{
		return true;
	}else if(a.age>b.age){
		return false;
	}else{
		if(strcmp(b.name,a.name)<0){
			return false;
		}else if (strcmp(b.name,a.name)>0)
		{
			return true;
		}else{
			if(a.index1<b.index1)
			{
				return true;
			}else{
				return false;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,i,j,k,f,r,t,n,m,x,y,z,p,q;
	str A[mx];
	str B[mx];
	cin>>t;
	while(t--){
		f=0;
		r=0;
		cin>>n>>m;
		rep(i,n){
			cin>>A[i].name;
			cin>>A[i].age;
			A[i].index1=i;
		}
		i=0;
		j=n-1;
		rep(k,m){
			if (cmp(A[i],A[j]))
			{
				B[k].age=A[i].age;
				B[k].index1=A[i].index1;
				strcpy(B[k].name,A[i].name);
				B[k].index2=k;
			
				i++;
			}else{
				B[k].age=A[j].age;
				B[k].index1=A[j].index1;
				strcpy(B[k].name,A[j].name);
				B[k].index2=k;
			
				j--;
			}
		}

		sort(B,B+m,cmp2);

		rep(i,m) cout<<B[i].index1<<" ";
		cout<<"\n";
	}
	return 0;
}