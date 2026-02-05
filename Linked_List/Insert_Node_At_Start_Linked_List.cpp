#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		// Constructor to initialize
		Node(int value) {
			data=value;
			next=NULL;
		}
	
};

int main()
{
	Node* head=NULL;
	int arr[]={2,4,6,8,10};
	
	// Insertion At Starting
	for(int i=0;i<5;i++) {
	if(head==NULL) {
		head=new Node(arr[i]);
	}
	else {
		Node* temp;
		temp=new Node(arr[i]);
		temp->next=head;
		head=temp;
	}
  }
  
  // Print 
  
  Node* temp=head;
  cout<<"Linked List Elements: ";
  while(temp) {
  	cout<<temp->data<<" ";
  	temp=temp->next;
  }
  
  return 0;
}