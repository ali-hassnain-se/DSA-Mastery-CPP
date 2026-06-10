#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void waveForm(int arr[][4], int row, int col) {
    for(int j=0;j<col;j++) {
        if(j%2==0) {
            for(int i=0;i<row;i++)
            cout<<arr[i][j]<<" ";
        }

        else {
            for(int i=row-1;i>=0;i--)
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    // Syntax: vector<vector<int> > matrix(rows, vector<int(cols, initialize));
    // vector<vector<int> > matrix(3, vector<int>(4,1));

    // for(int i=0;i<3;i++) {
    //     for(int j=0;j<4;j++) {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // finding size of rows and cols
    // cout<<"Rows: "<<matrix.size()<<endl;
    // cout<<"Cols: "<<matrix[0].size()<<endl;

    // input from user
    int n,m;
    cout<<"Enter Size Of Rows: ";
    cin>>n;
    cout<<"Enter Size Of Cols: ";
    cin>>m;

    vector<vector<int> > matrix(n, vector<int>(m, 1));

    cout<<"Enter Values: ";
    for(int i=0;i<n;i++) 
    for(int j=0;j<m;j++)
    cin>>matrix[i][j];

    // output
    for(int i=0;i<n;i++) { 
        for(int j=0;j<m;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int arr[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};

// WAVE FORM problem solution
   waveForm(arr, 4, 4);

    return 0;
}