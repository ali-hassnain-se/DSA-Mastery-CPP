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

void insertAtStart(Node* &head, int x) {
	if(head==NULL) {
		head=new Node(x);
	}
	else {
		Node* temp=new Node(x);
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
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
	
	for(int i=0;i<5;i++) {
		insertAtStart(head, arr[i]);
	}
	
	printDLL(head);
	
	return 0;
}