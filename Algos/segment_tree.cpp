#define mx 1000005
ll A[mx];
ll tree[mx];
ll lazy[mx]={0};
ll N;

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
		
		if (start!=end)
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
	
	return seg_fun(query(left,right,2*node,start,mid),query(left,right,2*node+1,mid+1,end));

}
