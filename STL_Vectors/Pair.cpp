#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
// we will make pair of name, age
    // pair<string, int> p;

    // 1st method to insert data
    // p=make_pair("rohit", 30);

    // second method to insert data
    // p.first="rohit";
    // p.second=30;

    // print
  // cout<<p<<endl;  it's wrong method to print
  // correct method is:
//   cout<<p.first<<" "<<p.second<<endl;

/* now if we want to insert multiple data like:
name, age, weight we will write one variable(name) 
in single form and will make pair of age and wight.
*/

   pair<string, pair<int, int>>p;

   // first method to insert data 
//    p=make_pair("rohit", make_pair(25, 80));

   // second method to insert data
   p.first="rohit";
   p.second.first=25;
   p.second.second=80;

/* we can also make pair of name, age and wight will
be in single form, like this:

    pair<pair<string, int>, int>p;

   1st method to insert data
   p=make_pair(make_pair("rohit", 25), 80);
   
   2nd method to insert data
   p.first.first="rohit";
   p.first.second=25;
   p.second=80;
*/   
// So, by using this we can insert multiple values

   // print
   cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;



    return 0;
}