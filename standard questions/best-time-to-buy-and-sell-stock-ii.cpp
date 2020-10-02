#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
typedef vector<int long long > vi; 
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
bool comp(ll a,ll b)
{
	return a<b;
}
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        if(prices.size()<=1)
            return 0;
        for(int i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<=prices[i+1])
            {
                prof+=prices[i+1]-prices[i];
            }
        }
        return prof; 
    }
};
int main()
{
    
}

