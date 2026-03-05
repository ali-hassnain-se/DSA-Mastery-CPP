#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node *next;
		
		Node(int value) {
			data=value;
			next=NULL;
		}
};

void createList(Node* &head1, Node* &tail1, int x) {
	if(head1==NULL) {
		head1=new Node(x);
		tail1=head1;
	}
	else {
		tail1->next=new Node(x);
		tail1=tail1->next;
	}
}

Node* sortedMerge(Node* head1, Node* head2) {
	Node* head=new Node(0);
	Node* tail=head;
	
	while(head1 && head2) {
		if(head1->data <= head2->data) {
			tail->next=head1;
			head1=head1->next;
			tail=tail->next;
			tail->next=NULL;
		}
		else {
			tail->next=head2;
			head2=head2->next;
			tail=tail->next;
			tail->next=NULL;
		}
	}
	
	if(head1) {
		tail->next=head1;
	}
	else {
		tail->next=head2;
	}
	
	tail=head;
	head=head->next;
	delete tail;
	
	return head;
}

void display(Node* head) {
	Node* temp=head;
	while(temp) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}



int main()
{
	Node* head1=NULL, *tail1=NULL;
	Node* head2=NULL, *tail2=NULL;
	
	int arr_1[]={2,3,4,5};
	int arr_2[]={1,6,7,8,9,10};
	
	for(int i=0;i<4;i++) {
		createList(head1, tail1, arr_1[i]);
	}
	
	for(int j=0;j<6;j++) {
		createList(head2, tail2, arr_2[j]);
	}
	
	cout<<"Two Sorted Merge Linked Lists: ";
	Node* mergedHead=sortedMerge(head1, head2);
	display(mergedHead);
	
	return 0;
}