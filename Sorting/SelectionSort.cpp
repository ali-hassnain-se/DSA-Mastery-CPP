#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements: ";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int min_Idx;
	for(int i=0;i<n-1;i++) {
		min_Idx=i;
		for(int j=i+1;j<n;j++) {
			if(arr[j]<arr[min_Idx]) {
				min_Idx=j;
			}
		}
		int temp=arr[min_Idx];
		arr[min_Idx]=arr[i];
		arr[i]=temp;
	}
	cout<<"Sorted Array"<<endl;
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
