/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node* curr=head;
        int count=0;
        while(curr) {
            count++;
            curr=curr->next;
        }
        
        if(k>count) // if k is more than number of nodes
        return -1;
        
        
        int temp=count-k;
        
        curr=head;
        while(temp--) {
            curr=curr->next;
        }
        
        return curr->data;
    }
};