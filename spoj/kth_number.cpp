// link :: https://www.spoj.com/problems/MKTHNUM/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
#define debug(x) cout<<#x<<" :: "<<x<<endl;
#define boost1 ios::sync_with_stdio(0)
#define boost2 cin.tie(0)
#define size1 100005
#define mod 1000000007
#define vll         vector < ll >
#define vpll        vector < pair < ll ,ll> >
#define pii         pair < int,int >
#define pll         pair < ll,ll >
#define fi          first
#define se          second
#define pb(x)       push_back(x)
#define endl        "\n"
#define mem1(x)     memset(x,-1,sizeof x)
#define mem(x)      memset(x,0,sizeof x)
#define mem63(x)    memset(x,63,sizeof x)
#define lim 1000000000
 
 
 
struct Node{
    int count;
    Node *left,*right;
};
typedef struct Node Node;
 
pii w[size1];
int mapped[size1],comp[size1];
Node *head[size1];
 Node* create(){
    Node *node = new Node();
    node->count = 0;
    node->left = NULL;
    node->right = NULL;
    return node;
 }
 
int getcount(Node *root){
    if(root == NULL){
        return 0;
    }
    return root->count;
}
Node* insert(Node *root,int l,int r,int p){
    if(p<l || r<p){
        return root;
    }
 
    int m = (l+r)/2;
    Node* node = create();
    node->count = root->count + 1;
 
    if(l == r){
        return node;
    }
    node->left = insert(root->left,l,m,p);
    node->right = insert(root->right,m+1,r,p);
    return node;
}
int query(Node* a,Node *b,int l,int r,int k){
    if(l == r){
        return l;
    }
    int coun = getcount(a->left) - getcount(b->left);
    int m = (l+r)/2;
    if(coun >= k){
        return query(a->left,b->left,l,m,k);
    }else{
        return query(a->right,b->right,m+1,r,k - coun);
    }
}
Node* build(int l,int r){
    Node *node = create();
    if(l == r){
        return node;
    }
    int m = (l+r)/2;
    node->left = build(l,m);
    node->right = build(m+1,r);
    return node;
}
int main()
{
    boost1;
    boost2;
    int n,m,i,j,t,x,y,k;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>w[i].fi;
        w[i].se = i;
        mapped[i] = w[i].fi;
    }
    sort(w,w + n);
 
    for(i=0;i<n;i++){
        comp[w[i].se] = i;
    }
    head[n] = build(0,n-1);
    head[0] = insert(head[n],0,n-1,comp[0]);
    //debug(comp[0]);
    for(i=1;i<n;i++){
        head[i] = insert(head[i-1],0,n-1,comp[i]);
        //debug(comp[i]);
    }
    for(i=0;i<m;i++){
        cin>>x>>y>>k;
        x--,y--;
        cout<<mapped[w[query(head[y],x == 0 ? head[n] : head[x-1],0,n-1,k)].se]<<endl;
    }
    return 0;
}
