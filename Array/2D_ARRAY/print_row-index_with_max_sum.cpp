#include<iostream>
#include<climits>
using namespace std;

void printRowMax(int arr[][4], int row, int col) {
    int sum=INT_MIN, index=-1;
    
    for(int i=0;i<row;i++) {
        int row_total=0;
        for(int j=0;j<col;j++) {
            row_total+=arr[i][j];
            if(sum<row_total) {
                sum=row_total;
                index=i;
            }
        }
    }

    cout<<"Row: "<<index<<" With Max Sum: "<<sum<<endl;
}

int main()
{
    int arr[5][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for(int i=0;i<5;i++) {
        for(int j=0;j<4;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printRowMax(arr, 5, 4);

    return 0;
}