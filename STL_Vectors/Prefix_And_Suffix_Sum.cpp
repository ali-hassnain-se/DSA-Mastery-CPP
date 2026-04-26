#include<iostream>
#include<vector>

using namespace std;

void prefix_Suffix(vector<int> &arr) {
    int n=arr.size();

    vector<int> prefix(n);
    prefix[0]=arr[0];

    for(int i=1;i<n;i++) {
        prefix[i]=prefix[i-1]+arr[i];
    }

    vector<int> suffix(n);
    suffix[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--) {
        suffix[i]=suffix[i+1]+arr[i];
    }

    cout<<"Prefix Sum Is: ";
    for(int i=0;i<n;i++) 
        cout<<prefix[i]<<" ";
    
    cout<<endl;

    cout<<"Suffix Sum Is: ";
    for(int i=0;i<n;i++) 
        cout<<suffix[i]<<" ";
    
}

int main()
{
    vector<int> arr={6, 4, 5, -3, 2, 8};

    cout<<"Original Array Is: ";
    for(int i=0;i<arr.size();i++) 
        cout<<arr[i]<<" ";

    cout<<endl;

    prefix_Suffix(arr);

    return 0;
}