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

void createLinkedList(Node* &head, Node* &tail, int x) {
	if(head==NULL) {
		head=new Node(x);
		tail=head;
	}
	else {
		tail->next=new Node(x);
		tail=tail->next;
	}
}

void print(Node* head) {
	Node* print=head;
	while(print) {
		cout<<print->data<<" ";
		print=print->next;
	}
}

int main()
{
	Node* head=NULL;
	Node* tail=NULL;
	
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLinkedList(head, tail, arr[i]);
	}
	
	cout<<"Before Reversing: ";
	print(head);
	cout<<endl;
	
	vector<int> ans;
	Node* temp=head;
	while(temp!=NULL) {
		ans.push_back(temp->data);
		temp=temp->next;
	}
	
	int i=ans.size()-1;
	temp=head;
	while(temp) {
		temp->data=ans[i];
		i--;
		temp=temp->next;
	}
	
	cout<<"After Reversing: ";
	print(head);
	
	return 0;
}