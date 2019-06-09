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
