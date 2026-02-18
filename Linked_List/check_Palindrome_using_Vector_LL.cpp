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

bool isPalindrome(Node* head, vector<int>& ans) {
	Node* temp=head;
	while(temp) {
		ans.push_back(temp->data);
		temp=temp->next;
	}
	if(ans.size()==1) {
		return 1;
	}
	
	int st=0, end=ans.size()-1;
	while(st<=end) {
		if(ans[st]!=ans[end]) {
			return 0;
		}
		else {
			st++;
			end--;
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
	
	vector<int> ans;
	int result=isPalindrome(head, ans);
	if(result==1) {
		cout<<"Linked List Is Plaindrome"<<endl;
	}
	else {
		cout<<"Linked List Is Not Plaindrome"<<endl;
	}
	
	return 0;
	
}