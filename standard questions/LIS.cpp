#include<bits/stdc++.h>
using namespace std;
int ceil(vector<int> sample,int val)
{
    int l=0,h=sample.size()-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(sample[mid]==val)
            return mid;
        else if(sample[mid]>val)h=mid-1;
            else l=mid+1;
    }
    return l;
}
int lengthOfLIS(vector<int>& nums)
{
    int n=nums.size(),i;
    vector<int> sample;
    if(n==0)
        return 0;
    sample.push_back(nums[0]);
    for(i=1;i<n;i++)
    {
        int index=ceil(sample,nums[i]);
        if(index==sample.size())
            sample.push_back(nums[i]);
        sample[index]=nums[i];
    }
    return sample.size();
}
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<lengthOfLIS(a);
}
