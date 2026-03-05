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
	cout<<endl;
}

Node* sortList(Node* head) {
	if(!head) {
		return NULL;
	}
	
	Node* curr=head;
	Node* head_0=new Node(0), *head_1=new Node(0), *head_2=new Node(0);
	Node* tail_0=head_0, *tail_1=head_1, *tail_2=head_2;
	
	while(curr) {
		if(curr->data == 0) {
			tail_0->next=curr;
			tail_0=tail_0->next;
		}
		else if(curr->data == 1) {
			tail_1->next=curr;
			tail_1=tail_1->next;
		}
		else {
			tail_2->next=curr;
			tail_2=tail_2->next;
		}
		curr=curr->next;
	}
	
	tail_0->next=head_1->next;
	tail_1->next=head_2->next;
	tail_2->next=NULL;
	tail_2=head_0;
	
	Node* newHead=head_0->next;
	
	delete head_0;
	delete head_1;
	delete head_2;
	
	return newHead;
}

int main() {
	Node* head=NULL, *tail=NULL;
	int arr[]={0,1,0,2,2,0,1};
	for(int i=0;i<7;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Original List: ";
	display(head);
	
	cout<<"After Sorting: ";
	Node* dummy=sortList(head);
	display(dummy);
	
	return 0;
}