#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int ll;






	ll F[100005]={0};
	ll R[100005]={0};
	ll ncrp[2005][2005]={{0}};

ll gcd(ll a, ll b); 
ll power(ll x,ll y,ll m); 
ll m = mod;

ll modInverse(ll a) 
{ 
    ll g = gcd(a, m); 
    if (g != 1) {
    	return 1;
    }
    else
    { 
        return power(a, m-2, m); 
    } 
} 

ll power(ll x,ll y,ll m) 
{ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
  
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
ll fac(int n){
	if (n<=1)
	{
		return 1;
	}
	if (F[n]!=0)
	{
		return F[n];
	}
	if (n<100005)
	{
		F[n] = (n*fac(n-1))%mod;
		return F[n];
	}
	else
		return (n*fac(n-1))%mod;
}

ll faci(int n){
	
	if (R[n]!=0)
	{
		return R[n];
	}
	
	ll x = fac(n);

	R[n] = modInverse(x);

	return R[n];
	
}

ll ncr(ll n , ll r){
	if (n<r)
	{
		return 0;
	}
	if (ncrp[n][r]!=0)
	{
		return ncrp[n][r];
	}
	else{
		ncrp[n][r]=((fac(n)*((faci(r)*faci(n-r))%mod))%mod);
		return ncrp[n][r];
	}
	
}


// ll sncr(ll n, ll r){
// 	if ( r== 0)
// 	{
// 		return 1;
// 	}
// 	if (ncr[n][r]!=0)
// 	{
// 		return ncr[n][r];
// 	}
// 	ncr[n][r]=ncr(n,r)+sncr(n,r-1);
// 	return ncr[n][r];
// }


int main(int argc, char const *argv[])
{
	fastIO
	ll a,b,c,d,i,j,k,r,t,n,l,u,e;
	ll A[100005];
	ll B[2005]={0};
	ll C[100005]={0};
	
	
	cin>>t;
	while(t--){
	
		vector<pair<int,int>> v;
		b=0;

		cin>>n;
		
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
	
		v.push_back(make_pair(1,A[0]));		
		for (int i = 1; i < n; ++i)
		{
			if (A[i]!=A[i-1])
			{
				b++;
				v.push_back(make_pair(1,A[i]));
			}
			else{
				v[b].first++;
			}
		}

		r=0;
		for (int i = 1; i <= n; i+=2)
		{
			r+=ncr(n,i);
			r%=mod;
		}
		
		l=0;
		for(j=0;j<=b;j++){

			if (v[j].first==1)
			{
				l++;
				continue;
			}
			else{
				ll x = v[j].first;
				u=n-l-x;
				for (int i = 2; i <= x; ++i)
				{
					c=0;
					if (i%2==0)
					{
						a=d=0;
						while(a<=l&&d<=u){
							c+=ncr(l,a)*ncr(u,d);
							c%=mod;
							a++;
							d++;
						}
						e=2;
						while(e<i){
							a=e;
							d=0;
							while(a<=l&&d<=u){
								c+=ncr(l,a)*ncr(u,d);
								c%=mod;
								a++;
								d++;
							}
							a=0;
							d=e;
							while(a<=l&&d<=u){
								c+=ncr(l,a)*ncr(u,d);
								c%=mod;
								a++;
								d++;
							}
							e+=2;
						}
					}
					else{
						e=1;
						while(e<i){
							a=e;
							d=0;
							while(a<=l&&d<=u){
								c+=ncr(l,a)*ncr(u,d);
								c%=mod;
								a++;
								d++;
							}
							a=0;
							d=e;
							while(a<=l&&d<=u){
								c+=ncr(l,a)*ncr(u,d);
								c%=mod;
								a++;
								d++;
							}
							e+=2;
						}
					}
					r+= ncr(x,i) * c;
					r%= mod;
				}
				l+=v[j].first;
			}
		}

		cout<<r<<"\n";

		// sort(v.begin(),v.end());

		// for (int i = 0; i <= b ; ++i)
		// {
		// 	cout<<v[i].first<<" "<<v[i].second<<"\n";
		// }
		
		/*
		vector<pair<int,int>> v;
		b=0;
		r=0;
		cin>>n;
		
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		sort(A,A+n);
		
		v.push_back(make_pair(1,A[0]));
		
		for (int i = 1; i < n; ++i)
		{
			if (A[i]!=A[i-1])
			{
				b++;
				v[b]=make_pair(1,A[i]);
			}
			else{
				v[b].first++;
			}
		}
			//cout<<fac(4)<<"\n";
		for (int i = 1; i <= n; i+=2)
		{
			r+=(((fac(n)*faci(i))%mod)*faci(n-i))%mod;
			r%=mod;
		}
		sort(v.begin(),v.end());
		for (int i = 2; i <= n; i+=2)
		{
			j=0;
			while(j<=b&&v[j].first>=i){

			r+=(((fac(v[j].first)*faci(i))%mod)*faci(v[j].first-i))%mod;
			r%=mod;

			j++;
			}
		}
		
		
		// break;
		*/
	}
	return 0;
}