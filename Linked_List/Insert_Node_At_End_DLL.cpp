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

void insertAtEnd(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
	}
	else {
		tail->next=new Node(x);
		tail->prev=head;
		tail=tail->next;
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
	Node* head=NULL, *tail=NULL;;
	
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		insertAtEnd(head, tail,  arr[i]);
	}
	
	printDLL(head);
	
	return 0;
}