#include<iostream>
using namespace std;

void pyramid();

void pyramid_numbers();



int main()
{
    // pyramid pattern
    pyramid();
    // pyramid numbers pattern
    pyramid_numbers();

    return 0;
}

void pyramid() {
    int row, col, n=6;
    for(row=1;row<=n;row++) {
        // print space 
        for(col=1;col<=n-row;col++)
        cout<<" ";

        // print *
        for(col=1;col<=(2*row)-1;col++)
        cout<<"*"<<" ";

        cout<<endl;
    }
}

void pyramid_numbers() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print space n-row times
        for(col=1;col<=n-row;col++)
        cout<<" ";

        // print 1 to row numbers (increasing)
        for(col=1;col<=row;col++)
        cout<<col<<" ";

        // print row-1 to 1 numbers (decreasing)
        for(col=row-1;col>=1;col--)
        cout<<col<<" ";

        cout<<endl;
    }
}