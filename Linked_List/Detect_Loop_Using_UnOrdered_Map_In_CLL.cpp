#include<iostream>
#include<unordered_map>
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

bool detectLoop(Node* head) {
	Node* curr=head;
	unordered_map<Node*, bool> visited;
	while(curr != NULL) {
		// If node is already visited
		if(visited[curr]==1)
		//if loop exist return 1
		return 1;
		// else insert in visited and increment in curr
		visited[curr]=1;
		curr=curr->next;
	}
	
	//if not exist return 0
	return 0;
}

int main()
{
	Node* head=NULL, *tail=NULL;
	int arr[]={1,2,3,4,5};
	
	for(int i=0;i<5;i++) {
		createLoop(head, tail, arr[i]);
	}
	
	int ans=detectLoop(head);
	
	if(ans==1) {
		cout<<"Loop Exists"<<endl;
	}
	else {
		cout<<"Loop Doesn't Exist"<<endl;
	}
	
	return 0;
}