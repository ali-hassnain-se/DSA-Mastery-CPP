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

void createLoop(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
		tail->next=head;
	}
	else {
		tail->next=new Node(x);
		tail=tail->next;
		tail->next=head;
	}
}

bool detectLoop(Node* head) {
	Node* slow=head, *fast=head;
	
	while(fast!=NULL && fast->next!=NULL) {
		slow=slow->next;
		fast=fast->next->next;
		
		if(slow==fast) {
			return 1;
		}
	}
	return 0;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLoop(head, tail, arr[i]);
	}
	
	int ans=detectLoop(head);
	
	if(ans==1) {
		cout<<"Loop Exists"<<endl;
	}
	else {
		cout<<"Loop Doesn't Exist"<<endl;
	}
	
	return 0;
}