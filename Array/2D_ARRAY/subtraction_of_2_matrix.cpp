#include<iostream>
using namespace std;

int main()
{
    int arr1[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3]={1,2,3,4,5,6,7,8,9};

    int ans[3][3];

    for(int row=0;row<3;row++) {
        for(int col=0;col<3;col++) {
            ans[row][col]=arr1[row][col]-arr2[row][col];
        }
    }

    // print
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}