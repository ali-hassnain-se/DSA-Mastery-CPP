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

int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	int arr[]={2,4,6,8,10};
	
	// inserting Node
	for(int i=0;i<5;i++) {
		if(head==NULL) {
			head=new Node(arr[i]);
			tail=head;
		}
		else {
			tail->next=new Node(arr[i]);
			tail=tail->next;
		}
	}
		
	// Deleting Node From Last
	 
	if(head!=NULL) {
		// if linked list has one Node
		if(head->next==NULL) {
			Node* temp=head;
			delete temp;
			head=NULL;
		}
		// if linked list has more than one Node
		else {
			Node* curr=head;
			Node* prev=NULL;
			
			while(curr->next!=NULL) {
				prev=curr;
				curr=curr->next;
			}
			
			delete curr;
			prev->next=NULL; // curr->next
		}
	}
	
	// print linked list
	
	Node* temp=head;
	
	while(temp) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
	return 0;
}