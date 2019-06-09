#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
#define mx 1000005
#define INF LLONG_MAX

#define mem(a,val) memset(a,val,sizeof(a))
#define rep(i,j,n) for(i=j;i<n;i++)
#define invrep(i,j,n) for (i = j-1; i >=n ; --i)

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define prec(n) fixed<<setprecision(n)
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define bin_long stoi(to_string(x), nullptr, 2);

using namespace std;
typedef long double ld;
ld pi=2.0*acos(0.0);

typedef long long int ll;
typedef pair<ll,ll> pl;

mt19937 rng32(chrono::steady_clock::now().time_since_epoch().count());


int main(int argc, char const *argv[])
{
    fastIO
    ll ax,ay,bx,by,cx,cy,i,j,k,f,r,x,y,z,r1,r2,rx,ry;
    ll n,m,p,q,t;
    ll A[mx];
    memset(A,-1,sizeof(A));

    cin>>t;
    while(t--){
        cin>>n;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        if(n==0){
            r=abs(ax-bx)+abs(ay-by);
            r+=abs(cx-bx)+abs(cy-by);
            r+=abs(ax-cx)+abs(ay-cy);
        }else{
            
            ax%=n;
            bx%=n;
            cx%=n;
            ay%=n;
            by%=n;
            cy%=n;
            
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=r1;
            //cout<<rx<<" ";
            ax-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            bx+=n;
            
            cx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            cx+=n;
            
            ax-=n;
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            bx+=n;
            
            ax-=n;
            cx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            cx+=n;
            
            cx-=n;
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            cx+=n;
            bx+=n;
            
            r=rx;
            
            ax=ay;
            bx=by;
            cx=cy;
            
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=r1;
            
            ax-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            bx+=n;
            
            cx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            cx+=n;
            
            ax-=n;
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            bx+=n;
            
            ax-=n;
            cx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            ax+=n;
            cx+=n;
            
            cx-=n;
            bx-=n;
            r1=abs(ax-bx);
            r1+=abs(bx-cx);
            r1+=abs(cx-ax);
            rx=min(rx,r1);
            cx+=n;
            bx+=n;
            
            r+=rx;
            
//             ax%=n;
//             if(ax>abs(ax-n))
//             {
//                 ax=(ax-n);
//             }
//             bx%=n;
//             if(bx>abs(bx-n))
//             {
//                 bx=(bx-n);
//             }
//             cx%=n;
//             if(cx>abs(cx-n))
//             {
//                 cx=(cx-n);
//             }
            
            
//             ay%=n;
//             if(ay>abs(ay-n))
//             {
//                 ay=(ay-n);
//             }
//             by%=n;
//             if(by>abs(by-n))
//             {
//                 by=(by-n);
//             }
//             cy%=n;
//             if(cy>abs(cy-n))
//             {
//                 cy=(cy-n);
//             }
//             // r1=abs(ax-bx);
//             // r1+=abs(bx-cx);
//             // r1+=abs(cx-ax);
//             // ax-=n;
//             // bx-=n;
//             // cx-=n;
//             // r1=abs(ax-bx);
//             // r1+=abs(cx-bx);
//             // r1+=abs(ax-cx);
//             // r=min(r,r1);
//             // ay-=n;
//             // by-=n;
//             // cy-=n;
//             r=abs(ax-bx)+abs(ay-by);
//             r+=abs(cx-bx)+abs(cy-by);
//             r+=abs(ax-cx)+abs(ay-cy);
//             // r=min(r,r1);
//             // ax+=n;
//             // bx+=n;
//             // cx+=n;
//             // r1=abs(ax-bx)+abs(ay-by);
//             // r1+=abs(cx-bx)+abs(cy-by);
//             // r1+=abs(ax-cx)+abs(ay-cy);
//             // r=min(r,r1);
        }
        cout<<r<<"\n";
    }


    return 0;
}