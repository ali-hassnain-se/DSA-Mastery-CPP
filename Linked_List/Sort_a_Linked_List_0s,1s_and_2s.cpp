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
	Node* curr=head;
	int count_0=0, count_1=0, count_2=0;
	
	while(curr) {
		if(curr->data == 0) {
			count_0++;
		}
		else if(curr->data == 1) {
			count_1++;
		}
		else {
			count_2++;
		}
		curr=curr->next;
	}
	
	curr=head;
	while(count_0--) {
		curr->data=0;
		curr=curr->next;
	}
	
	while(count_1--) {
		curr->data=1;
		curr=curr->next;
	}
	
	while(count_2--) {
		curr->data=2;
		curr=curr->next;
	}
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={0,1,0,2,2,0,1};
	for(int i=0;i<7;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Original Linked List: ";
	display(head);
	
	cout<<"After Sorting: ";
	Node* dummy=sortList(head);
	display(dummy);
	
	return 0;
}