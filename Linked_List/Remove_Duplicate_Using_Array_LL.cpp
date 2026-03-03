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

void display(Node* head) {
	Node* temp=head;
	while(temp) {
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

Node* removeDuplicate(Node* head) {
	vector<int> ans;
	ans.push_back(head->data);
	Node* curr=head->next;
	while(curr) {
		if(ans[ans.size()-1] != curr->data) {
			ans.push_back(curr->data);
		}
		curr=curr->next;
	}
	curr=head;
	Node* prev=NULL;
	int idx=0;
	while(idx<ans.size()) {
		curr->data=ans[idx];
		prev=curr;
		idx++;
		curr=curr->next;
	}
	prev->next=NULL;
	
	return head;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={2,2,2,3,3,4,4};
	
	for(int i=0;i<7;i++) {
		createList(head, tail, arr[i]);
	}
	
	cout<<"Before: ";
	display(head);
	cout<<endl;
	
	cout<<"After: ";
	removeDuplicate(head);
	display(head);
	
	return 0;
}