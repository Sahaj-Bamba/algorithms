
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