#include<iostream>
#include<bits/stdc++.h>

/* Properties Of Unordered_map:
   1. unique keys will be present but not in proper sorted order
   like in map
   2. duplicate keys are not allowed
   3. it stores key in unordered way unlike map
   4. it uses Hashing for implementation
   5. insertion, deletion, and searching have constant time O(1)
*/

/* Properties Of Unordered_multimap:
   1. duplicate keys will be present but not in proper sorted order
   like in map
   2. duplicate keys are allowed
   3. it stores key in unordered way unlike map
   4. it uses Hashing for implementation
   5. insertion, deletion, and searching have constant time O(1)
*/

using namespace std;
int main()
{
    unordered_map<int, int> m;

    // insert data
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));  // it will not store this, cause it appears two time
    m.insert(make_pair(50, 30));
    // another method to insert or update data
    m[20]=5; // update
    m[100]=60;


    // print 
    for(auto it=m.begin();it!=m.end();it++) {
        cout<<"key: "<<it->first<<" Value: "<<it->second<<endl;
    }

/* Now! we will discuss about unordered_multimap, so it also stores
key in unordered way and there is duplication of keys will be 
allowed unlike unordered_map. 
    */

    unordered_multimap<int, int> m2;

    // insert data
    m2.insert(make_pair(20, 30));
    m2.insert(make_pair(30, 310));
    m2.insert(make_pair(40, 230));
    m2.insert(make_pair(20, 230));  // it will store this
    m2.insert(make_pair(50, 30));
   
/*   another method that is not allowed in multimap
    m2[100]=60;
    m2[20]=70;
*/
    // it's allowed in unordered_multimap, it update and insert correctly 
    m2.insert(make_pair(100, 60));
    m2.insert(make_pair(20, 70));

    // print
    for(auto it=m2.begin();it!=m2.end();it++) {
        cout<<"key: "<<it->first<<" Value: "<<it->second<<endl;
    }



    return 0;
}