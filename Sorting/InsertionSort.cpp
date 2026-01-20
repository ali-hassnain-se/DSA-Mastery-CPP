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
	for(int i=1;i<n;i++) {
		int key=arr[i];
		int j=i-1;
		while(j>=0 && key<arr[j]) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<"Sorted Array"<<endl;
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
