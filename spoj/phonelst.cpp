#include<bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

#define     IOS         ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define 	setprecn(x) cout<<fixed<<setprecision(x);
#define 	ll          long long int
#define 	pb          push_back
#define 	pll         pair<ll,ll>
#define 	vll         vector<ll>
#define 	ff          first
#define 	ss          second
#define 	all(a)      (a).begin(),(a).end()
#define 	sz(x)       (ll)x.size()
#define 	mod         1000000007
#define 	inf         10000000000000007
#define 	rep(i,n)    for(ll i=0;i<n;i++)
#define 	repe(i,a,b) for(ll i=a;i<b;i++)
#define 	lbnd        lower_bound
#define 	ubnd        upper_bound
#define 	bs          binary_search

ll power(ll a,ll b,ll m=mod)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	ll c=power(a,b/2,m);
	if(b%2==0)
		return((c%m)*(c%m))%m;
	return ((((c%m)*(c%m))%m)*(a%m))%m;
}
/********************************************************/

// SPOJ PHONELST - Phone List TRIE
// https://www.spoj.com/problems/PHONELST/


struct trie{
	char ch;
	bool end;
	trie *next[10];
	trie(char c): ch(c), end(0) {
		for(ll i=0;i<10;i++)
			next[i]=0;
	}
};

string s;
bool b=0;
trie *insert(trie *node,ll pos)
{
	if(pos == s.size())
	{
		node->end=1;
		return node;
	}
	if(node->end) b=1;
	if(pos == s.size()-1 && node->next[s[pos]-'0'] != 0) b = 1;
	if(node->next[s[pos]-'0'] == 0)
		node->next[s[pos]-'0'] = new trie(s[pos]);
	node->next[s[pos]-'0'] = insert(node->next[s[pos]-'0'], pos+1);
	return node;
}

int main()
{
	IOS;
	ll n,k,m,i,j,c=0,cs=0,t;
	t=1;

	cin>>t;
	while(t--)
	{
		trie *root=new trie('#'); // root of trie
		b=0;
		cin>>n; // count of strings of dictionary
		// n=s.length();
		// ll a[n];
		rep(i,n)
		{
			cin>>s;
			root = insert(root,0);
		}
		
		cout<<(b==0?"YES":"NO");

		
		cout<<"\n";
	}
	return 0;
}
