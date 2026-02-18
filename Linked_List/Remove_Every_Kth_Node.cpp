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

Node* removeEveryKthNode(Node* head, int k) {
	int count=1;
	
	if(k==1) {
		return NULL;
	}
	
	Node* curr=head, *prev=NULL;
	while(curr) {
		if(k==count) {
			prev->next=curr->next;
			delete curr;
			curr=prev->next;
			count=1;
		}
		else {
			prev=curr;
			curr=curr->next;
			count++;
		}
	}
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	
	for(int i=0;i<10;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Before Removing Kth Node: ";
	printList(head);
	cout<<endl;
	
	cout<<"After Removing Kth Node: ";
	head=removeEveryKthNode(head, 3);
	printList(head);
	
	return 0;
	
}