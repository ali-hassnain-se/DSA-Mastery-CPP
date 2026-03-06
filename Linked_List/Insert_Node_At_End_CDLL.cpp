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

void createList(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
	head=new Node(x);
	tail=head;
	tail->next=head;
	tail->prev=head;	
	}
	else {
		Node* dummy=new Node(x);
		tail->next=dummy;
		dummy->prev=tail;
		dummy->next=head;
		tail=tail->next;
	}
}

void display(Node* head) {
	if(head==NULL) 
	return;
	
	Node* temp=head;
	do {
		cout<<temp->data<<" ";
		temp=temp->next;
	} while(temp!=head);
	cout<<endl;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={1,2,3,4,5};
	for(int i=0;i<5;i++) {
		createList(head, tail, arr[i]);
	}
	
	display(head);
	
	return 0;
}