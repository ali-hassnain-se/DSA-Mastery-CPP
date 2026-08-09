#include<iostream>
using namespace std;

void print();

void print_num();

void print_row();

void alphabets();

void row_num();

int main()
{
    // print * using n-row times spacing
    print();
    // print row number using n-row times spacing
    print_num();
    // print 1 to row times numbers
    print_row();
    // print row times alphabets
    alphabets();
    // print numbers from row number to 1
    row_num();


    return 0;
}

void print() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print space
        for(col=1;col<=n-row;col++)
        cout<<"  ";  // 2 spaces required, 1 space required to print pyramid pattern

        // print *
        for(col=1;col<=row;col++)
        cout<<"*"<<" ";

        cout<<endl;
    }
}

void print_num() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print space
        for(col=1;col<=n-row;col++)
        cout<<"  ";  // 2 spaces

        // print numbers
        for(col=1;col<=row;col++)
        cout<<row<<" ";

        cout<<endl;
    }
}

void print_row() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print space
        for(col=1;col<=n-row;col++)
        cout<<"  ";  // 2 spaces

        // print 1 to row numbers
        for(col=1;col<=row;col++)
        cout<<col<<" ";

        cout<<endl;
    }
}

void alphabets() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print space 
        for(col=1;col<=n-row;col++)
        cout<<" ";  // 2 spaces, if we give one space it will print pattern in diamond shape

        // print characters
        for(col=1;col<=row;col++) {
            char c='A'+(col-1);
            cout<<c<<" ";
        }

        cout<<endl;
    }
}

void row_num() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        // print spaces
        for(col=1;col<=n-row;col++)
        cout<<"  ";  // 2 spaces

        // print numbers
        for(col=row;col>=1;col--)
        cout<<col<<" ";

        cout<<endl;
    }
}