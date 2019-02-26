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