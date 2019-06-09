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