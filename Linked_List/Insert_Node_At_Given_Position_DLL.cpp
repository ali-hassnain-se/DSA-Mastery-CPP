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

void createDLL(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
	}
	else {
		Node* temp=new Node(x);
		tail->next=temp;
		temp->prev=tail;
		tail=temp;
	}
}

void printDLL(Node* head) {
	Node* trav=head;
	
	while(trav) {
		cout<<trav->data<<" ";
		trav=trav->next;
	} 
}

void insertAtGivenPos(Node* &head, int pos, int val) {
	if(pos<=-1) {
		cout<<"Invalid Position! To Insert Node"<<endl;
		return;
	}
	
	if(pos==0) {
		// If Linked List Doesn't exist
		
		if(head==NULL) {
			head=new Node(val);
		}
		// if linked list exists
		
		else {
		Node* temp=new Node(val);
		temp->next=head;
		head->prev=temp;
		head=temp;
	   }
	   return;
	}
	
	else {
	Node* curr=head;
	while(--pos) {
		curr=curr->next;
	}
	// if we want to insert node at end
	
	if(curr->next==NULL) {
		Node* temp=new Node(val);
		temp->prev=curr;
		curr->next=temp;
	}
	// if we want insert node at middle
	
	else {
	Node* temp=new Node(val);
	temp->next=curr->next;
	temp->prev=curr;
	curr->next=temp;
	temp->next->prev=temp;
    }
  }
}

int main()
{
	Node *head=NULL, *tail=NULL;
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createDLL(head, tail, arr[i]);
	}
	
	cout<<"Before: ";
	printDLL(head);
	cout<<endl;
	
	cout<<"After: ";
	insertAtGivenPos(head, 2, 5);
	printDLL(head);
	
	return 0;
}