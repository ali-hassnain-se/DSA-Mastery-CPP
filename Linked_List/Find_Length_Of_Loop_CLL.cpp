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

int findLength(Node* head) {
	Node* slow=head, *fast=head;
	while(fast!=NULL && fast->next!=NULL) {
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast) 
		break;
	}
	if(fast==NULL || fast->next==NULL) {
		return 0;
	}
	int count=1;
	slow=fast->next;
	while(slow != fast) {
		count++;
		slow=slow->next;
	}
	
	return count;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={1,2,3,4,5};
	for(int i=0;i<5;i++) {
		createLoop(head, tail, arr[i]);
	}
	
	int ans=findLength(head);
	if(ans==0) {
		cout<<"Loop Doesn't Exist"<<endl;
	}
	else {
		cout<<"Length Of Loop Is: "<<ans<<endl;
	}
	
	return 0;
}