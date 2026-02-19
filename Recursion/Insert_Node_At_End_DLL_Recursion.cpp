#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node* prev;
		
		Node(int value) {
			data=value;
			next=NULL;
			prev=NULL;
		}
};

Node* insertAtEnd(int arr[], int idx, int size, Node* back) {
	if(idx==size) {
		return NULL;
	}
	Node* temp=new Node(arr[idx]);
	temp->prev=back;
	temp->next=insertAtEnd(arr, idx+1, size, temp);
	
	return temp;
}

void printDLL(Node* head) {
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
	
	head=insertAtEnd(arr, 0, 5, NULL);
	
	printDLL(head);
	
	return 0;
}