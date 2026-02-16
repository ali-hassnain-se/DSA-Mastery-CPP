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
	int count=0;
	Node* temp=head;
	while(temp!=NULL) {
		count++;
		temp=temp->next;
	}
	
	count/=2;
	temp=head;
	while(count--) {
		temp=temp->next;
	}
	
	return temp;
}

int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLinkedList(head, tail, arr[i]);
	}
	
	Node* mid=Middle(head);
	cout<<"Middle Of The Linked List is: "<<mid->data<<endl;
	
	return 0;
}