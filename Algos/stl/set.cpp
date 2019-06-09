#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

	set<ll,greater<ll>> Set;	//	Remove greater for ascending order
	Set.insert(6);
	Set.insert(1);
	Set.insert(2);
	Set.insert(4);
	Set.insert(6);
	Set.insert(6);
	Set.erase(6);
	cout<<Set.count(1)<<"\t";	//	1 or 0 element present in set or not.
	cout<<Set.size()<<"\n";
	for(auto i=Set.begin(); i!=Set.end(); i++)
	cout<<*i<<"\t";
	
			//	Set.clear();		Removes all elements from set
	
			
	set<ll,greater<ll>> c= Set;		// Can Be copied by =	
	
	swap(c,Set);		// Swap contents of 2 sets
	
	
	return 0;
}