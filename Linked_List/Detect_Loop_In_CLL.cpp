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

bool check(vector<Node*>& visited, Node* curr) {
	for(int i=0;i<visited.size();i++) {
		if(visited[i]==curr)
		return 1;
	}
	
	return 0;
}

bool detectLoop(Node* head) {
	Node* curr=head;
	vector<Node*> visited;
	while(curr != NULL) {
		// If node is already visited
		if(check(visited, curr))
		return 1;
		// else push_back() and increment in curr
		visited.push_back(curr);
		curr=curr->next;
	}
	
	return 0;
}

int main()
{
	Node* head=NULL;
	
	return 0;
}