#include<iostream>
using namespace std;

void print();

void printnum();

void printrow();

void printcol();

void descending();

void squarepattern();

void cubepattern();

void alphabets();

int main()
{
    // print *
    print();
    // print 10
    printnum();
    // print row number
    printrow();
    // print col number
    printcol();
    // descending number pattern
    descending();
    // square pattern
    squarepattern();
    // cube pattern
    cubepattern();
    // print alphabets
    alphabets();



    return 0;
}

void print() {
    // print "*"
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void printnum() {
    // print 10
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<"10"<<" ";
        }
        cout<<endl;
    }
}

void printrow() {
    // print row number
    for(int i=0;i<5;i++) { // row
        for(int j=0;j<5;j++) {  // col
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void printcol() {
    // print column number
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void descending() {
    for(int row=0;row<5;row++) {
        for(int col=5;col>=1;col--) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}

void squarepattern() {
    for(int row=0;row<5;row++) {
        for(int col=1;col<=5;col++) {
            cout<<col*col<<" ";
        }
        cout<<endl;
    }
}

void cubepattern() {
    for(int row=0;row<5;row++) {
        for(int col=1;col<=5;col++) {
            cout<<col*col*col<<" ";
        }
        cout<<endl;
    }
}

void alphabets() {
    for(int row=0;row<5;row++) {
        char c='a'+row;
        for(int col=1;col<=5;col++) {
            cout<<c<<" ";
        }
        cout<<endl;
    }
}