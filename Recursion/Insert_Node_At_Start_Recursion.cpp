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

void insertAtStart(int arr[], int idx, int size, Node* &head) {
	if(idx==size) {
		return;
	}
	
	Node* temp=new Node(arr[idx]);
	
	if(head==NULL) {
		head=temp;
	}
	else {
		temp->next=head;
		head=temp;
	}
	
	insertAtStart(arr, idx+1, size, head);
}

void printList(Node* head) {
	Node* trav=head;
	while(trav) {
		cout<<trav->data<<" ";
		trav=trav->next;
	}
}

int main()
{
	Node* head=NULL;
	int arr[]={1,2,3,4,5};
	
	insertAtStart(arr, 0, 5, head);
	
	printList(head);
	
	return 0;
}