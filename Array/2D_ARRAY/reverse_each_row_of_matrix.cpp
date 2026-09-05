#include<iostream>
using namespace std;

int main()
{
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++) {
        int st=0, end=2;
        while(st<end) {
            int temp=matrix[i][st];
            matrix[i][st]=matrix[i][end];
            matrix[i][end]=temp;
    // we can also use this: swap(matrix[i][st], matrix[i][end]);

            st++, end--;
        }
    }

    cout<<"Reversed Matrix"<<endl;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}