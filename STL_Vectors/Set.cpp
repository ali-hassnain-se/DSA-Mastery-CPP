#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// to insert objects of class into set, we will create a class
class Person {
    public:
    int age;
    string name;

    /* it tells the compiler that on which basis you want to sort values, here
    we sort values on tha basis of age, less age will be print first and so on
    */
    bool operator < (const Person &other) const {
        return age<other.age;
    }
};

/*  
    Properties Of Set:
    1. only unique values will be stored
    2. store values in sorted oreder(by default Ascending),
    we can sort it in Descending order also using greater<type>
    3. insertion, deletion, and search have logarithmic time complecity
    O(logn), making them fast for most use cases
    4. generally implemented using Red-Black Tree
*/ 


int main()
{
    set<int> s;

    // insert data
    s.insert(20);
    s.insert(10);
    s.insert(30);

    // delete element
    s.erase(10);

    // print values
    for(auto it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }

/* now if we want to store values in descending order, we can use this:
    set<int, greater<int>> s;
*/

    // search element
    if(s.find(20)!=s.end())
    cout<<"Present\n";
    else
    cout<<"Absent";

/* another method to find value: we will use count, it also can be used
   to count of that element, let's see how
*/
    // if(s.count(20))
    // cout<<"Present\n";
    // else
    // cout<<"Absent";
    // // we can also use this:
    // cout<<s.count(20)<<endl;

 // To insert objects of class into set, we will create a set of datatyoe Person   
    set<Person> s2;
//  now we create objects of Person class
    Person p1, p2, p3;
    p1.age=10, p1.name="rohit";
    p2.age=30, p2.name="mohit";
    p3.age=5, p3.name="sohit";
//  now, we will put these values into set
    s2.insert(p1);
    s2.insert(p2);
    s2.insert(p3);  /* mow if we run our code it will give error because it 
                   doesn't know that on which bases it should be sorted, to
                   solve this we will use this function in our Person class:
                   bool operator < (const Person &other) const {
                   return age<other.age;  } it will store in ascending order,
                   if we want to store in descending order, we can only change
                   the condition in bool function: return age>other.age;
                */

    // now we will print 
    for(auto it=s2.begin();it!=s2.end();it++) {
        cout<<(*it).age<<" "<<(*it).name<<endl;  // we can also write like this: 
        // cout<<it->age<<" "<<it->name;
    }


    return 0;
}