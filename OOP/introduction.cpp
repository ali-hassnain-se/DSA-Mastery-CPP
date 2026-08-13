#include<iostream>
using namespace std;

/*
OOP: "OOP stands for Object Oriented Programming, it is an approach or
a programming pattern where the programs are structured around Objects
rather than Functions and Logic."

Class: It is user-defined datatype, Blueprint for creating objects.
Object: It is an entity that has a state and behaviour, anything that
exist in physical world is called Object.
*/

class Student {
    private:
    string name;
    int age, roll_num;
    string grade;

    public:
    // Setter functions
    void setname(string n) {
        name=n;
    }

    void setage(int a) {
        age=a;
    }

    void setroll_num(int rn) {
        roll_num=rn;
    }

    void setgrade(string g) {
        grade=g;
    }

    // Getter functions
    void getname() {
        cout<<name<<endl;
    }

    void getage() {
        cout<<age<<endl;
    }

    void getroll_num() {
        cout<<roll_num<<endl;
    }

    // void getgrade() {
    //     cout<<grade<<endl;
    // }
    string getgrade(int pin) {
        if(pin==1234)
        return grade;

        return "INVALID PIN!";
    }
};

class Empty {


};

int main()
{
    Student s1;

    // objects
    s1.setname("Rohit");
    s1.setage(18);
    s1.setroll_num(26);
    s1.setgrade("A+");

    s1.getname();
    s1.getage();
    s1.getroll_num();
    cout<<s1.getgrade(1234)<<endl;

    // empty class
    Empty obj;

    cout<<sizeof(obj)<<endl;  // size of empty class object, an empty
    // class object size is 1 byte


    return 0;
}