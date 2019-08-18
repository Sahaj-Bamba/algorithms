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