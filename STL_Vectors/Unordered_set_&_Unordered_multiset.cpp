#include<iostream>
#include<bits/stdc++.h>

/*
  1. Set: store unique element, sorted way
  2. MultiSet: sorted way
  3. Unordered_set: store unique element
  4. Unordered_multiset: neither store unique element nor in sorted way
*/

using namespace std;
int main()
{
    /* 
    Properties Of Unordered_Set:
    1. it stores unique elements
    2. it stores data in unordered way
    3. Time Complexity=O(1), it means if we search, insert, or 
    delete element the time complexity in unordered_set will be
    constant time.
    4. The implementation of unordered_set has been done using
    hashing technique.
    "The only difference between set and unordered_set is that
    unordered_set stores element in random order instead of sorting
    order (Ascending/Descending)."
    */
    unordered_set<int> s;

    // insert data
    s.insert(10);
    s.insert(20);
    s.insert(30);

    // print
    for(auto it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // now, if we want to store duplicate elements, we will use 
    // unordered_multiset, like this:
    unordered_multiset<int> s2;

    // insert
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(10);

    // print
    for(auto it=s2.begin();it!=s2.end();it++) {
        cout<<*it<<" ";
    }

    return 0;
}