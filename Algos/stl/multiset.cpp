#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

	multiset<ll,greater<ll>> Set;	//	Remove greater for ascending order
	Set.insert(1);
	Set.insert(1);
	Set.insert(2);
	Set.insert(4);
	Set.insert(6);
	Set.insert(6);
	Set.erase(6);		//	erase all instances of an element
	cout<<Set.count(1)<<"\t";	//	 no of times element present in multiset .
	cout<<Set.size()<<"\n";
	for(auto i=Set.begin(); i!=Set.end(); i++)
	cout<<*i<<"\t";
	
			//	Set.clear();		Removes all elements from set
	
	
	multiset <int> acsset(Set.begin(), Set.end());	// multiset of ascending order
	
	for(auto i=acsset.begin(); i!=acsset.end(); i++)
	cout<<*i<<"\t";
			
	multiset<ll,greater<ll>> c= Set;		// Can Be copied by =	
	
	swap(c,Set);		// Swap contents of 2 sets
	
	
	return 0;
}