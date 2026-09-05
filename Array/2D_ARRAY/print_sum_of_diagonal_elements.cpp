#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4]={5,8,3,9,6,2,8,4,5,3,2,2,2,8,1,9};

    // print first diagonal sum
    int first=0;

    for(int i=0;i<4;i++) {
        first+=matrix[i][i];
    }

    cout<<"First Diagonal Sum: "<<first<<endl;

    // second diagonal sum
    int second=0;

    int i=0, j=3;
    while(j>=0) {
        second+=matrix[i][j];
        i++;
        j--;
    }

    cout<<"Second Diagonal Sum: "<<second<<endl;

    return 0;
}