#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define null NULL
#define mp make_pair
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 1e17
#define si 400005
#define For(i,a,b) for(i=a;i<b;i++)
#define piv pair<int ,vector<int>>


ll powmod(ll a, ll b){ ll ans = 1; while(b){if(b&1)ans=(ans%M*a%M)%M; a=(a%M*a%M)%M; b=b>>1;}return ans;}
int dis(map<int, int> ::iterator it1, map<int, int> ::iterator it2){
    int ans = 0;
    while(it1 != it2){
        it1++;ans++;
    }
    return ans;
}
int main(){
    boost
    int q, n, r, i, ct, tmp;
    set<int> s;
    set<int> ::reverse_iterator it;
    cin>>q;
    while(q--){
        cin>>n>>r;
        For(i, 0, n){
            cin>>tmp;
            s.insert(tmp);
        }
        ct = 0;
        for(it=s.rbegin();it!=s.rend();it++){
            if((*it-(ct*r)) <= 0)
                break;
            ct++;
        }
        s.clear();
        cout<<ct<<endl;
    }
    return 0;
}


