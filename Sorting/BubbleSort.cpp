#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Size Of Array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements Of Array"<<endl;
	for(i=0;i<n;i++) {
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(arr[j]>arr[j+1]) {
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array Is"<<endl;
	for(i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
