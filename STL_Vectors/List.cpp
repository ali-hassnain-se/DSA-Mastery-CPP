#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> l;

    // insert values at end of list
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    // insert values at end
    l.push_front(50);

    // print first and last value of lis
    cout<<l.front()<<" "<<l.back()<<endl;

    // to remove value from front
    l.pop_front();

    // to remove value from end
    l.pop_back();

/* print all values of list, we can use for(list<int>::iterator it=l.begin();
   it!=l.end();it++) instead of using auto keyword.
   Here! l.end() means that it is pointing to the one at the end is pointing
   to the one ahead of it, And auto keyword is used to detect automatically
   the datatype of iterator.
    */
    for(auto it=l.begin();it!=l.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // print values in reverse order
    for(auto it=l.rbegin();it!=l.rend();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    // check size of list
    cout<<l.size()<<endl;


    return 0;
}