#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();
        // Transpose
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse Each Row
        for(int i=0;i<n;i++) {
        int st=0, end=n-1;
            while(st<end) {
                swap(matrix[i][st], matrix[i][end]);
                st++;
                end--;
            }
        }
}

int main()
{
    int row=4,col=4;
    vector<vector<int>> matrix(row, vector<int>(col, 0));

    cout<<"Enter Numbers: ";
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>matrix[i][j];
        }
    }

    cout<<"Before Rotation"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate(matrix);  // 90 degree rotation
    rotate(matrix); // 90 degree rotation
    // 90+90=180 degree rotation complete

    cout<<"After Rotation"<<endl;
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}