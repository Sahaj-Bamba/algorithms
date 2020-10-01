// DSU

ll N;
ll A[mx];
ll Parent[mx];

ll initialise(){
	ll i;
	rep(i,0,N){
		Parent[i]=i;
	}
}

ll dsufun(ll a,ll b){
	if (A[a]>A[b])
	{
		return 1;
	}else if (A[a]<A[b])
	{
		return -1;
	}else{
		return 0;
	}
}

ll parent(ll ind){
	if (ind==Parent[ind])
	{
		return ind;
	}
	return Parent[ind] = parent(Parent[ind]);
}

bool join(ll a, ll b){
	ll x,y;
	x=parent(a);
	y=parent(b);
	if (x==y)
	{
		return false;
	}
	switch (dsufun(x,y))
	{
		case -1: Parent[x]=y;
				break;
		case 1: Parent[y]=x;
				break;
	}
	return true;
}





//	extended euclid



int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

//	Graph

#define mx_nodes 1000005
ll Edges_num;
ll Nodes_num;
std::vector<pair<ll,ll>> Edges[mx_nodes];
ll Height[mx_nodes];
void input(){
	cin>>Nodes_num>>Edges_num;
	ll i,j,k,a,b,c;
	rep(i,0,Edges_num){
		cin>>a>>b>>c;
		Edges[a].pb(mp(b,c));
	}
}
ll assign_height_helper(ll root){
	if (Height[root]!=-1)
	{
		return Height[root];
	}
	ll i,j,k=0;
	for(auto it : Edges[root]){
		j=assign_height_helper(it);
		k=max(k,j);
	}
	Height[root]=k+1;
	return Height[root];
}

void assign_height(){
	ll i,j,k;
	rep(i,0,Nodes_num+1){
		assign_height_helper(i);
	}
}





// LCSub seqq

ll L[mx][mx]; 
ll X[mx];
ll Y[mx];

ll lcs(ll m, ll n ) 
{ 

	ll i,j,k;
	
	for (ll i=0; i<=m; i++) 
	{ 
		for (ll j=0; j<=n; j++) 
		{ 
			if (i == 0 || j == 0) 
				L[i][j] = 0; 
			else if (X[i-1] == Y[j-1]) 
				L[i][j] = L[i-1][j-1] + 1; 
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]); 
		} 
	} 
	
	ll index = L[m][n]; 
	
	return index;
	
	ll lcs[index+1]; 
	lcs[index] = -100; // Set the terminating character 
	
	// Start from the right-most-bottom-most corner and 
	// one by one store characters in lcs[] 
	
	i = m;
	j = n; 
	
	while (i > 0 && j > 0) 
	{ 
			// If current character in X[] and Y are same, then 
			// current character is part of LCS 
		if (X[i-1] == Y[j-1]) 
		{ 
			lcs[index-1] = X[i-1]; // Put current character in result 
			i--; j--; index--;     // reduce values of i, j and index 
		} 
	
			// If not same, then find the larger of two and 
			// go in the direction of larger value 
		else if (L[i-1][j] > L[i][j-1]) 
			i--; 
		else
			j--; 
	
	} 
	
	 // Print the lcs 
	//	cout << "LCS of " << X << " and " << Y << " is " << lcs; 

}


// LC sub array

ll X[mx];
ll Y[mx];
ll LCSuff[mx][mx]; 
ll LCSubStr(ll n,ll m) 
{  
	ll result = 0;
	ll i,j;

	for (i=0; i<=n; i++) 
	{ 
		for (j=0; j<=n; j++) 
		{ 
			if (i == 0 || j == 0) 
				LCSuff[i][j] = 0; 

			else if (X[i-1] == Y[j-1]) 
			{ 
				LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
				result = max(result, LCSuff[i][j]); 
			} 
			else LCSuff[i][j] = 0; 
		} 
	}
	return result; 
} 


				//		Complexity  O(n*m)



// LI sub seq

ll V[mx];
ll len=1;
ll bs(ll a){
	ll l,r,m,ans=len;
	l=0;
	r=len-1;
	while(l<=r){
		m=(l+r)/2;
		if(V[m]<a){
			l=m+1;
		}else{
			ans=m;
			r=m-1;
		}
	}
	return ans;
}

ll longest_increasing_subsequence(){
		ll i;
		V[0]=(A[0]);
		len=1;
		rep(i,1,n){
			if(V[len-1]<A[i]){
				V[len++]=(A[i]);
				continue;
			}
			if(A[i]<V[0]){
				V[0]=A[i];
			}
			V[bs(A[i])]=A[i];
		}
		return len;
}

// Mat mul

#define N 4 
void multiply(int mat1[][N], int mat2[][N], int res[][N]) 
{ 
	int i, j, k; 
	for (i = 0; i < N; i++) 
	{ 
		for (j = 0; j < N; j++) 
		{ 
			res[i][j] = 0; 
			for (k = 0; k < N; k++) 
				res[i][j] += mat1[i][k] * mat2[k][j]; 
		} 
	} 
} 


// Mod inv

ll mod_inv(ll a){
	ll p=mod-2;
	ll ans = 1;
	while(p>0){
		if(p%2==1){
			ans*=a;
			ans%=mod;
		}
		a*=a;
		a%=mod;
		p/=2;
	}
	return ans;
}

ll modInverse(ll a, ll m) 
{
	ll m0 = m;
	ll y = 0, x = 1;

	if (m == 1) 
		return 0; 

	while (a > 1) 
	{ 
		ll q = a / m; 
		ll t = m; 

		m = a % m, a = t; 
		t = y; 

		y = x - q * y; 
		x = t; 
	}

	if (x < 0) 
		x += m0; 

	return x; 
}


// Mod exp

	//	Time	O(log(n))
	//	Space	O(log(n)) 

ll modularExponentiation(ll x,ll n,ll M=mod)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

	//	Time	O(log(p))
	//	Space	O(1) 
	
	//	#define mod 1000000007
ll exp_mul(ll b,ll p){
    ll ans = 1;
    while(p>0){
        if(p%2!=0){
            ans*=b;
            ans%=mod;
        }
        b*=b;
        b%=mod;
        p/=2;
    }
    return ans;
}


// ncr



	ll F[1000005]={0};
	ll R[1000005]={0};
	ll ncrp[2005][2005]={{0}};

ll gcd(ll a, ll b); 
ll power(ll x,ll y,ll m); 
ll m = 1000000007;

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

ll power(ll x,ll y,ll m=mod) 
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
	if (n<1000005)
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


// Segment tree

#define mx 1000005
ll A[mx];
ll tree[mx];
ll lazy[mx]={0};
ll N;

				//	Tree is 1 indexed array is 0 indexed

ll seg_neutral(){
	return 0;
}

ll seg_fun(ll a,ll b){
	return (a+b);
}

void build (ll node=1, ll start=0, ll end=N-1){
    
    if(start == end){
    	tree[node]=A[start];
    	return;
    }

    ll mid = (start + end)/2;

    build(2*node,start,mid);
    build(2*node+1,mid+1,end);

    tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}

void update(ll idx, ll val, ll node=1, ll start=0, ll end=N-1){
	if (start == end)
	{
		A[idx]=val;
		tree[node]=val;
		return;
	}
	ll mid = (start + end)/2;
	if (idx<=mid)
	{
		update(idx,val,2*node,start,mid);
	}else{
		update(idx,val,2*node+1,mid+1,end);
	}
	tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}

ll query(ll left, ll right, ll node=1, ll start=0, ll end=N-1){
	if (right<start||left>end)
	{
		return seg_neutral();
	}
	if(start>=left&&end<=right)
	{
		return tree[node];
	}
	ll mid = (start + end)/2;

	return seg_fun(query(left,right,2*node,start,mid),query(left,right,2*node+1,mid+1,end));
}

void propagate_lazy(ll node, ll left, ll right){
	if (lazy[node]!=0)
	{
			tree[node] += (right-left+1)*lazy[node]; 
		
		if (left!=right)
		{
			lazy[node*2+1] += lazy[node];
			lazy[node*2] += lazy[node];
		}
		lazy[node]=0;
	}
}

void lazy_update(ll left, ll right, ll val, ll node=1, ll start=0, ll end=N-1){
	propagate_lazy(node,start,end);
	if (right<start||left>end)
	{
		return;
	}
	if(start>=left&&end<=right)
	{
		lazy[node]=val;
		propagate_lazy(node,start,end);
		return;
	}
	ll mid = (start + end)/2;

	lazy_update(left,right,val,2*node,start,mid);
	lazy_update(left,right,val,2*node+1,mid+1,end);

	tree[node]=seg_fun(tree[2*node],tree[2*node+1]);
}

ll lazy_query(ll left, ll right, ll node=1, ll start=0, ll end=N-1){
	propagate_lazy(node,start,end);
	if (right<start||left>end)
	{
		return seg_neutral();
	}
	if(start>=left&&end<=right)
	{
		return tree[node];
	}
	ll mid = (start + end)/2;
	
	return seg_fun(lazy_query(left,right,2*node,start,mid),lazy_query(left,right,2*node+1,mid+1,end));

}


// sort cmp

bool comp(str a, str b) 
{ 
    if (a.a<b.a)
     {
     	return true;
     }else if(a.a>b.a){
     	return false;
     }else{
     	 if (a.b<b.b)
	     {
	     	return true;
	     }else if(a.b>b.b){
	     	return false;
	     }else{
	     	  if (a.c<b.c)
		     {
		     	return true;
		     }else if(a.c>b.c){
		     	return false;
		     }else{
		     	    if (a.d<b.d)
				     {
				     	return true;
				     }else if(a.d>b.d){
				     	return false;
				     }else{
				     	return false;
				     }
		     }
	     }
     }
} 





// bit wise dp


typedef long long int ll;
typedef pair<ll,ll> pl;
ll N,n;

std::vector<pl> V;
	ll A[mx];
	ll DP[1<<21]={0};
	ll pre[21][mx]={{0}};

ll fun(int a,int b){
	if (DP[b]!=0)
	{
		return DP[b];
	}
	if (a==n)
	{
		//cout<<"hi";
		return 0;
	}
	ll an,ans,i,j,k,x,y,z;
	an=mx;
	for (i = 0; i < N; ++i)
	{
		if(((b>>i)&1)!=1){
			ans=pre[V[i].f][a+V[i].s-1]-pre[V[i].f][a];
			if (V[i].f==A[a])
			{
				ans++;
			}
			ans=V[i].s-ans;
			ans+=fun(a+V[i].s,b|(1<<i));
			
			if (an>ans)
			{
				an=ans;
			}
		}
	}
	return DP[b]=an;
}


int main(int argc, char const *argv[])
{
	ll a,b,c,i,j,k,f,r,t,m,x,y,z,p,q;
	cin>>n>>m;
	ll B[21]={0};
	
		f=0;
		r=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
			B[A[i]]++;
		}
		rep(i,21){
			if(B[i]!=0)
			{
				V.pb(mp(i,B[i]));
				N++;
			}
		}
		pre[A[0]][0]++;
		for(i=1;i<n;i++){
			rep(j,21){
				pre[j][i]=pre[j][i-1];
			}
			pre[A[i]][i]++;
		}
		cout<<fun(0,0);


	return 0;
}


// facs


	//	Time	O(sqrt(a))
	//	Space	O(num_facts(a)*1.5)


std::vector<int> Factors;
void all_factors(int a){
	Factors.resize(0);
	std::vector<int> v;
	for (int i = 1; i < sqrt(a); ++i)
	{
		if (a%i==0)
		{
			if (a/i!=i)
			{
				v.push_back(a/i);
			}
			Factors.push_back(a);
		}
	}
}


// seive


#define prime_max 1000006
ll Prime[prime_max]={0};
std::vector<ll> primes;
void prime_seive(int n=prime_max){
	Prime[0]=Prime[1]=1;
	for (int i = 2; i < n; ++i)
	{
		if (Prime[i]==0)
		{
			for (int j = i; j < n; j+=i)
			{
			    if(Prime[j]==0){
				    Prime[j]=i;

                }
			}
		}
	}
    rep(i,2,n){
        if (Prime[i]==i)
        {
            primes.pb(i);
        }
    }
}



//	uses of seive

bool check_prime(int n){
	if (Prime[n]==n)
	{
		return true;
	}
	else{
		return false;
	}
}

ll nums[prime_max] ={0};
int num_fac(int a){
    if(nums[a]!=0){
        return nums[a];
    }
    ll an = a;
    if(a==1){
    	nums[1]=1;
        return 1;
    }
 
    int ans = 1;
    int power = 0;
    int base=0;
 
    if(check_prime(a)){
        ans=2;
        nums[an]=ans;
        return ans;
    }   
    
    while(a!=1&&!(check_prime(a))){
        base=Prime[a];
        power=1;
        while(Prime[a]==base){
            power++;
            a/=base;
        }
        ans*=power;
    }
    if(a!=1){
        ans*=2;
    }
    nums[an]=ans;
    return ans;
}


// facs


std::vector<ll> pfacs;
void primefacs(ll a){
	ll i,b=a,f=0;
	rep(i,2,sqrt(b)+1){
		while(a%=i){
			a/=i;
			f=1;
		}
		if (f)
		{
			pfacs.pb(i);
			f=0;
		}
	}
	if (a!=1)
	{
		pfacs.pb(a);
	}
}