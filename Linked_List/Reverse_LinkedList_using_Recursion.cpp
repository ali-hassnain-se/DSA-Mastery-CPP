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

void print(Node* head) {
	Node* print=head;
	while(print) {
		cout<<print->data<<" ";
		print=print->next;
	}
}

Node* Reverse(Node* curr, Node* prev) {
	if(curr==NULL) {
		return prev;
	}
	
	Node* fut=curr->next;
	curr->next=prev;
	
	return Reverse(fut, curr);
}

int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLinkedList(head, tail, arr[i]);
	}
	
	cout<<"Before Reversing: ";
	print(head);
	cout<<endl;
	
	head=Reverse(head, NULL);
	cout<<"After Reversing: ";
	print(head);
	
	return 0;
}