#include<iostream>
#include<bits/stdc++.h>

/* Properties Of Set:
   1. It stores data in key-value pair
   2. Key should be unique
   3. It uses Red-Black Tree or AVL Tree for implementation
   4. Insertion, Deletion, and Searching have logarithmic time,
   O(logn), making them fast for more use cases.
*/

using namespace std;
int main()
{
    // syntax: map<key-datatype, value-datatype> map_name;
    map<int, int> m;

    // insert data
    m.insert(make_pair(20, 30));
    m.insert(make_pair(30, 310));
    m.insert(make_pair(40, 230));
    m.insert(make_pair(20, 230));  // map will not store this, cause it appears two time
    m.insert(make_pair(50, 30));
    // another method to insert data
  //m[key]=value;
    m[100]=60; // it is also used to update value
    m[20]=70; // now it will update value on 20 key(address),
    // now 70 is stored at key 20

    // print
    for(auto it=m.begin();it!=m.end();it++) {
        cout<<"key: "<<(*it).first<<" Value: "<<(*it).second<<endl;
    // we can write it like this: 
    // cout<<"key: "<<it->first<<" Value: "<<it->second<<endl;    
    }

    // access element
    /* m[100], it check that this key is present in map or not, if
    it presents it will print number that stored on it otherwise 
    print zero(0), now we can think that if key is present in our
    map and the value on it is stored also zero(0), then what we think
    that what does this zero(0) present - its presence or absent, so
    to avoid this we will use of count that is written below:
    */
    cout<<m[100]<<endl;  
    /* here if 100 key presents in map it will
    print value that stored on it and if this key not presents in map
    then we use count, now we will check it in adavance that if our
    key/address is present in map then print otherwise not. like this: 
    */
   if(m.count(100))
   cout<<m[100]<<endl;

   // remove data- m.erase(key-name) that you want to delete
   m.erase(50);


   // print
//    for(auto it=m.begin();it!=m.end();it++) 
//     cout<<"key: "<<(*it).first<<" Value: "<<(*it).second<<endl;

    /*Now! we will learn about one more concept that is <multimap>,
    "Multimap allows of duplication, it means in this the KEY can be
    duplicate", everything else will remain the same just like map.
    */

    multimap<int, int> m2;

    // insert data
    m2.insert(make_pair(20, 30));
    m2.insert(make_pair(30, 310));
    m2.insert(make_pair(40, 230));
    m2.insert(make_pair(20, 230));  // now it will store this
    m2.insert(make_pair(50, 30));
/*  
    another method that is not allowed in multimap
    it will don't do any updates, this is because it doesn't know
    that which key should be accessed/update because there are multiple
    duplicate key appears in multimap, that's why it's not allowed
    */
    // m[100]=60;
    // m[20]=70;  

    // print
    for(auto it=m2.begin();it!=m2.end();it++) {
        cout<<"key: "<<it->first<<" Value: "<<it->second<<endl;
    }

    // all other operations will be performed same as was in map


    return 0;
}