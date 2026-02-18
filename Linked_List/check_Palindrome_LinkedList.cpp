#include<iostream>
#include<vector>
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

bool isPalindrome(Node* head) {
	int count=0;
	if(head->next==NULL) {
		return 1;
	}
	
	Node* temp=head;
	while(temp) {
		count++;
		temp=temp->next;
	}
	
	count/=2;
	Node* curr=head, *prev=NULL;
	while(count--) {
		prev=curr;
		curr=curr->next;
	}
	prev->next=NULL;
	
	Node* front=NULL;
	prev=NULL;
	
	while(curr) {
		front=curr->next;
		curr->next=prev;
		prev=curr;
		curr=front;
	}
	
	Node* head1=head, *head2=prev;
	
	while(head1) {
		if(head1->data != head2->data) {
			return 0;
		}
		else {
			head1=head1->next;
			head2=head2->next;
		}
	}
	return 1;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	
	int arr[]={1,2,3,3,2,1};
	
	for(int i=0;i<6;i++) {
		createList(head, tail, arr[i]);
	}
	
	int result=isPalindrome(head);
	
	if(result==1) {
		cout<<"Linked List Is Plaindrome"<<endl;
	}
	else {
		cout<<"Linked List Is Not Plaindrome"<<endl;
	}
	
	
	return 0;
	
}