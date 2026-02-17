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

Node* rotateList(Node* head, int k) {
	int count=1;
	
	if(head==NULL || head->next==NULL) {
		return head;
	}
	
	Node* temp=head;
	
	while(temp->next!=NULL) {
		count++;
		temp=temp->next;
	}
	
	k=k%count;
	if(k==0) {
		return head;
	}
	
	count-=k;
	Node* curr=head, *prev=NULL;
	while(count--) {
		prev=curr;
		curr=curr->next;
	}
	prev->next=NULL;
	Node* end=curr;
	while(end->next!=NULL) {
		end=end->next;
	}
	end->next=head;
	head=curr;
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	
	int arr[]={1,2,3,4,5};
	for(int i=0;i<5;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Before Rotating: ";
	printList(head);
	cout<<endl;
	
	cout<<"After Rotating: ";
	head=rotateList(head, 2);
	printList(head);
	
	return 0;
}