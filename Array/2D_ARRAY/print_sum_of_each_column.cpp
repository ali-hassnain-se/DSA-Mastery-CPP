#include<iostream>
using namespace std;

int main()
{
// Time Complexity=O(col*row)

    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    for(int col=0;col<3;col++) {
        int sum=0;
        for(int row=0;row<3;row++) {
            sum+=matrix[row][col];
        }
        cout<<"Sum Of: "<<col<<" Column Is: "<<sum<<endl;
    }

    return 0;
}