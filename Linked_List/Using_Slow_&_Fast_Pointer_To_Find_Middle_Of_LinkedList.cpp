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

void createLinkedList(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
	}
	else {
		tail->next=new Node(x);
		tail=tail->next;
	}
}

Node* Middle(Node* &head) {
	Node* slow=head;
	Node* fast=head;
	
	while(fast!=NULL && fast->next!=NULL) {
		slow=slow->next;
		fast=fast->next->next;
	}
	
	return slow;
}

int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	
	int arr[]={1,2,3,4,5,6};
	
	for(int i=0;i<6;i++) {
		createLinkedList(head, tail, arr[i]);
	}
	
	Node* mid=Middle(head);
	cout<<"Middle Of Linked List Is: "<<mid->data<<endl;
	
	return 0;
}