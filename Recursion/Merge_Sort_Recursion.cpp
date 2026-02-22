#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int st, int mid, int end) {
	
	vector<int> temp(end-st+1);
	
	int left=st, right=mid+1, idx=0;
	
	while(left<=mid && right<=end) {
		if(arr[left]<=arr[right]) {
			temp[idx]=arr[left];
			idx++;
			left++;
		}
		else {
			temp[idx]=arr[right];
			idx++;
			right++;
		}
	}
	
	while(left<=mid) {
		temp[idx]=arr[left];
		idx++;
		left++;
	}
	
	while(right<=end) {
		temp[idx]=arr[right];
		idx++;
		right++;
	}
	
	idx=0;
	while(st<=end) {
		arr[st]=temp[idx];
		st++;
		idx++;
	}
}

void mergeSort(int arr[], int st, int end) {
	if(st==end) {
		return;
	}
	
	int mid=st+(end-st)/2;
	
	// Left
	mergeSort(arr, st, mid);
	// Right
	mergeSort(arr, mid+1, end);
	// Merging
	merge(arr, st, mid, end);
}

int main()
{
	int arr[]={4,1,3,2,5};
	
	mergeSort(arr, 0, 4);
	
	for(int i=0;i<5;i++) {
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}