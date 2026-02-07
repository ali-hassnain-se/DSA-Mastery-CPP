#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		Node(int value) {
			data=value;
			next=NULL;
		}
};

Node* createLinkedList(int arr[], int idx, int size) {
	if(idx==size) {
		return NULL;
	}
	Node* temp=new Node(arr[idx]);
	temp->next=createLinkedList(arr, idx+1, size);
	
	return temp;
}

int main()
{
	Node* head=NULL;
	
	int arr[]={4,1,3,2,5};
	
	head=createLinkedList(arr, 0, 5);
	
	Node* temp=head;
	
	while(temp) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	return 0;
}