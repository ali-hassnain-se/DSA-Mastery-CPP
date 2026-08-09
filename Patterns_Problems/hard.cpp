#include<iostream>
using namespace std;

void pyramid();

void pyramid_numbers();

void descending_pyramid();

void diamond_square();

void butterfly();



int main()
{
    // pyramid pattern
    pyramid();
    // pyramid numbers pattern
    pyramid_numbers();
    // descending pyramid pattern
    descending_pyramid();
    // print * in the form of square and some spacing inside it
    diamond_square();
    // print the butterfly pattern
    butterfly();

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

void descending_pyramid() {
    int row, col, n=5;

    for(row=n;row>=1;row--) {
        // print spaces
        for(col=1;col<=n-row;col++)
        cout<<"  ";  // 2 spaces

        // print *
        for(col=1;col<=2*row-1;col++)
        cout<<"*"<<" ";

        cout<<endl;
    }
}

void diamond_square() {
    int row, col, n=5;

    // 1st half
    for(row=n;row>=1;row--) {
        // print * row times
        for(col=1;col<=row;col++)
        cout<<"* ";
        
        // print spaces 
        for(col=1;col<=(2*n)-(2*row);col++)
        cout<<"  ";  // 2 spaces

        // print * row times
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }

    // 2nd half
    for(row=1;row<=n;row++) {
        // print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        // print spaces
        for(col=1;col<=(2*n)-(2*row);col++)
        cout<<"  ";

        // prnt *
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }
}

void butterfly() {
    int row, col, n=5;

    // 1st half
    for(row=1;row<=n;row++) {
        // print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        // print spaces
        for(col=1;col<=(2*n)-(2*row);col++)
        cout<<"  ";  // 2 spaces

        // print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }

    // 2nd half
    for(row=n-1;row>=1;row--) {
        // print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        // print spaces
        for(col=1;col<=(2*n)-(2*row);col++)
        cout<<"  ";  // 2 spaces

        // print *
        for(col=1;col<=row;col++)
        cout<<"* ";

        cout<<endl;
    }
}