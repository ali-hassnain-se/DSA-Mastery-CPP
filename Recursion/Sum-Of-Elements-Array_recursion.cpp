#include<iostream>
using namespace std;

int sum(int arr[], int idx) {
	if(idx==-1) {
		return 0;
	}
	
	return arr[idx]+sum(arr, idx-1);
}

int main()
{
	int arr[]={3,4,5,8,2};
	cout<<"Sum Of Array Is: "<<sum(arr, 4);
	
	return 0;
}