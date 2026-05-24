#include<iostream>
using namespace std;

void printcol(int arr[][4], int row, int col) {
/*  Here we must tell the size of column whenever we pass 2D array in
    function,,
    WHY IT IS REQUIRED? this is required because whenever we
    access any element like: cout<<arr[2][1];  Now computer will find
    the address of arr[2][1] and then print it, so how computer finds
    the address, let's see: "base_address+(row-index*col+col-index)*
    size_of_element"   Here! what is 'col', we don't know the value 
    of 'col' that's why we pass the value of column.
*/
    // column wise
    cout<<"Column Wise"<<endl;
    for(int j=0;j<col;j++) {
        for(int i=0;i<row;i++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    // create 2D array
    int arr[3][4]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // print all the values in array row wise
    cout<<"Row Wise"<<endl;
    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    
    // print all the values in array col wise, function call
    printcol(arr, 3, 4);

    // Find an element in our array
    int x=7;

    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            if(arr[row][col]==x) {
            cout<<"YES"<<endl;
            return 0;
            }
        }
    }

    cout<<"NO"<<endl;
}