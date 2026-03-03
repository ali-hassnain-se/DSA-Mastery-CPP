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

void createList(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
	}
	else {
		tail->next=new Node(x);
		tail=tail->next;
	}
}

void display(Node* head) {
	Node* temp=head;
	while(temp) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

Node* removeDuplicate(Node* head) {
	Node* prev=head;
	Node* curr=head->next;
	
	while(curr) {
		if(curr->data == prev->data) {
			prev->next=curr->next;
			delete curr;
			curr=prev->next;
		}
		else {
			prev=prev->next;
			curr=curr->next;
		}
	}
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={2,2,2,3,3,4,4};
	
	for(int i=0;i<7;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Before: ";
	display(head);
	cout<<endl;
	
	cout<<"After: ";
	removeDuplicate(head);
	display(head);
	
	return 0;
}