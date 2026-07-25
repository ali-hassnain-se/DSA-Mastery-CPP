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

void ascendingAlphabets();

void numbers();

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
    // print ascending alphabets
    ascendingAlphabets();
    // print continuous pattern
    numbers();


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

void ascendingAlphabets() {
    for(int row=0;row<5;row++) {
        for(int col=0;col<5;col++) {
            char c='a'+col;
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

void numbers() {
    // first method
    for(int row=0;row<5;row++) {
        for(int col=1;col<=5;col++) {
            cout<<row*5+col<<" ";
        }
        cout<<endl;
    }

    /* second methos
    int count=1;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    */
}