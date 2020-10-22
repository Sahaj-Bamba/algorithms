#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<" "<<#y<<" "<<y<<" "<<#z<<" "<<z<<endl;
#define present(c,x) ((c).find(x) != (c).end())
#define null NULL
#define mp make_pair
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 1e17

int main(){
    boost
    ll t,i,n,hash[200],ct,f,nch,nchreq;
    vector<ll> factors,count;
    vector<ll> ::iterator it,it1;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.length();
        for(i=1;i*i<=n;i++){
            nchreq=n/i;
            if(n%i==0){
                if(i*i==n)
                        if((nchreq>=1)&&(nchreq<=26))
                            factors.push_back(i);
                else{
                    if((nchreq>=1)&&(nchreq<=26))
                        factors.push_back(i);
                    if((i>=1)&&(i<=26))
                        factors.push_back(nchreq);
                }
            }
        }
        for(i=('A'-'\0');i<=('Z'-'\0');i++){
            hash[i]=0;
        }
        for(i=0;i<n;i++){
            hash[(s[i]-'\0')]++;
        }
        for(i=('A'-'\0');i<=('Z'-'\0');i++){
            if(hash[i]>0)
                count.push_back(hash[i]);
        }
        sort(count.begin(),count.end(),greater<ll>());
        ll ans=LLONG_MAX;
        nch=count.size();
        cout<<"factors "<<factors.size()<<endl;
        for(it=factors.begin();it!=factors.end();it++){
            f=(*it);
            nchreq=n/f;
            if(nchreq>=nch){
                for(it1=count.begin(),ct=0;it1!=count.end();it1++){
                    ct+=abs(*it1-f);
                }
                ct+=f*(nchreq-nch);
                ct=ct/2;
                if(ct<ans)
                    ans=ct;
            }
            else{
                for(it1=count.begin(),ct=0,i=0;it1!=count.end();it1++,i++){
                    if(i<nchreq)
                        ct+=abs(*it1-f);
                    else
                        ct+=(*it1);
                }
                ct=ct/2;
                if(ct<ans)
                    ans=ct;
            }
        }
        cout<<ans<<"\n";
        factors.clear();
        count.clear();
    }
    return 0;
}
