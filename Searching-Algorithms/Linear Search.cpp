#include<iostream>
using namespace std;

int main()
{
	int n,key;
	cout<<"Enter Size Of Array: ";
	cin>>n;
	cout<<"Enter Elements Of Array: ";
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<"Enter Element To Search: ";
	cin>>key;
	bool found=false;
	for(int i=0;i<n;i++) {
		if(arr[i]==key) {
			cout<<"Element Found At Index: "<<i<<endl;
			found=true;
			break;
		}
	}
	if(!found) {
		cout<<"not found"<<endl;
	}
	
	return 0;
}