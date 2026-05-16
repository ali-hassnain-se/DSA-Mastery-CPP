#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    /* the property of Multiset is that it can stores duplicate
    elemenets and we can print these elements, that's why we use
    Multiset.
    */

    multiset<int> s;

    // insert data
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);

    // delete element, if we delete 10 that is appear 2 times, it
    // will delete it as many times as it appears 
    s.erase(10);

    // print
    for(auto it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}