#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
		
		Node(int value) {
			data=value;
			next=NULL;
		}
};

void createLinkedList(Node* &head, Node* &tail, int val) {
	if(head==NULL) {
		head=new Node(val);
		tail=head;
	}
	else {
		tail->next=new Node(val);
		tail=tail->next;
	}
}

void printList(Node *head) {
	Node *print=head;
	while(print) {
		cout<<print->data<<" ";
		print=print->next;
	}
}

int main()
{
	Node *head=NULL;
	Node *tail=NULL;
	
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLinkedList(head, tail, arr[i]);
	}
	
	cout<<"Linked List Elements Before: ";
	printList(head);
	
	cout<<endl;
	
	// Reversing Linked List
	Node *curr=head;
	Node *prev=NULL;
	Node *fut=NULL;
	
	while(curr) {
		fut=curr->next;
		curr->next=prev;
		prev=curr;
		curr=fut;
	}
	
	head=prev;
	
	cout<<"After Reversing Linked List Elements: ";
	printList(head);
	
	cout<<endl;
	
	return 0;
}