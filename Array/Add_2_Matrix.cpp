#include<iostream>
using namespace std;

int main()
{
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={2,4,3,6,7,8,9,1,2,3,4,7};

    int ans[3][4];

    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            ans[row][col]=arr1[row][col]+arr2[row][col];
        }
    }

    //print addition of 2 matrix
    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            cout<<ans[row][col]<<" ";
        }
        cout<<endl;
    }
}