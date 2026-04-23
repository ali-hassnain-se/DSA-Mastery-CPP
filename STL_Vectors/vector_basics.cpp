#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // create vector/declare vector
    vector<int> v;
    vector<int> v1(5, 1);
    // size and capacity
    cout<<"Size Of v: "<<v.size()<<endl;
    cout<<"Capacity Of v: "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size Of v: "<<v.size()<<endl;
    cout<<"Capacity Of v: "<<v.capacity()<<endl;
    // Update Value
    v[1]=5;
    // size and capacity of v1
    cout<<"Size Of v1: "<<v1.size()<<endl;
    cout<<"Capacity Of v1: "<<v1.capacity()<<endl;
    v1.push_back(8);
    cout<<"Size Of v1: "<<v1.size()<<endl;
    cout<<"Capacity Of v1: "<<v1.capacity()<<endl;

    // Delete value from vector
    vector<int> vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);

    vnew.pop_back();

    cout<<"Size Of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity Of vnew: "<<vnew.capacity()<<endl;

    vnew.erase(vnew.begin()+1);
    cout<<"Size Of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity Of vnew: "<<vnew.capacity()<<endl;

    // print vector
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";

    vnew.insert(vnew.begin()+1, 50);  // insert value
    cout<<endl;

    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" "<<endl;

    vnew.clear();  // remove all the element 
    cout<<"Size Of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity Of vnew: "<<vnew.capacity()<<endl;

    vector<int> arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);

    //Different ways to print elemnts of vector
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;

    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;

    vector<int> a;
    // copy value of one vector to another vector
    a=arr;
    cout<<a.size()<<endl;

    // print vector using iterator
    for(auto it=arr.begin(); it!=arr.end(); it++) {
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto i: arr) {
        cout<<i<<" ";
    }

    vector<int> ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    // sort in increasing order
    sort(ans.begin(), ans.end());

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    cout<<endl;

    // sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>());

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    cout<<endl;

    //another way to sort in decreasing order

    sort(ans.rbegin(), ans.rend());

    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    cout<<endl;

    // search in binary search
    cout<<binary_search(ans.begin(), ans.end(), 54)<<endl;  // return 1 if element is present otherwise return 0
    
    cout<<find(ans.begin(), ans.end(), 54)-ans.begin()<<endl;

    return 0;
}