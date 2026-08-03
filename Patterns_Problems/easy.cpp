#include<iostream>
using namespace std;

void row_times();

void row_times_num();

void row_num();

void descending_row_num();

void alphabets_row_times();

void descending_row();

void row_times_descending();

int main()
{
    // print * row times
    row_times();
    // print numbers row times
    row_times_num();
    // print row number row times
    row_num();
    // print row number in descending order
    descending_row_num();
    // print alphabets row times
    alphabets_row_times();
    // print * row times in descending order
    descending_row();
    // print row number row times in descending order
    row_times_descending();


    return 0;
}

void row_times() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        for(col=1;col<=row;col++)
        cout<<"*"<<" ";

        cout<<endl;
    }
}

void row_times_num() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        for(col=1;col<=row;col++)
        cout<<col<<" ";

        cout<<endl;
    }
}

void row_num() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        for(col=1;col<=row;col++)
        cout<<row<<" ";

        cout<<endl;
    }
}

void descending_row_num() {
    int row, col, n=5;

    for(row=1;row<=n;row++) {
        for(col=row;col>=1;col--)
        cout<<col<<" ";

        cout<<endl;
    }
}

void alphabets_row_times() {
    int row, col, n=5;

    for(row=0;row<n;row++) {
        for(col=0;col<=row;col++) {
            char c='a'+row;
            cout<<c<<" ";
        }

        cout<<endl;
    }
}

void descending_row() {
    int row, col, n=5;

    for(row=n;row>=1;row--) {
        for(col=1;col<=row;col++)
        cout<<"*"<<" ";

        cout<<endl;
    }

/* second method
   
   int row, col, n=5;
   for(row=1;row<=n;row++) {
   for(col=1;col<=n-(row-1);col++)
   cout<<"*"<<" ";

   cout<<endl;
   }
*/
}

void row_times_descending() {
    int row, col, n=5;

    for(row=n;row>=1;row--) {
        for(col=1;col<=row;col++)
        cout<<col<<" ";

        cout<<endl;
    }
}