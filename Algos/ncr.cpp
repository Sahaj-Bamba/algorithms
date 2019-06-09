

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
