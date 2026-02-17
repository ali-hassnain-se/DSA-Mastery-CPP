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

void printList(Node* head) {
	Node* print=head;
	while(print) {
		cout<<print->data<<" ";
		print=print->next;
	}
}

Node* removeNthNode(Node* &head, int n) {
	int count=0;
	Node* temp=head;
	
	while(temp) {
		count++;
		temp=temp->next;
	}
	count-=n;
	
	if(count==0) {
		temp=head;
		head=head->next;
		delete temp;
		return head;
	}
	
	Node* curr=head, *prev=NULL;
	while(count--) {
		prev=curr;
		curr=curr->next;
	}
	prev->next=curr->next;
	delete curr;
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	
	int arr[]={1,2,3,4,5};
	for(int i=0;i<5;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Before Removing Nth Node: ";
	printList(head);
	cout<<endl;
	
	cout<<"After Removing Nth Node: ";
	head=removeNthNode(head, 2);
	printList(head);
	
	return 0;
}