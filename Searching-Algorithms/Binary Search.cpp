#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Size Of Array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter Elements Of Array"<<endl;
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int tar;
	cout<<"Enter Target To Search"<<endl;
	cin>>tar;
	int st=0, end=n-1;
	bool found=false;
	while(st<=end) {
		int mid=st+(end-st)/2;
		if(tar<arr[mid]) {
			end=mid-1;
		}
		else if(tar>arr[mid]) {
			st=mid+1;
		}
		else {
			cout<<"Element Found At Index: "<<mid<<endl;
			found=true;
			break;
		}
	}
	if(!found) {
		cout<<"Element Not Found!"<<endl;
	}
	
	return 0;
}