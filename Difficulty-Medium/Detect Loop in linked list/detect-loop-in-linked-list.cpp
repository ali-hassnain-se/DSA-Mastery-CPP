/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    
    
/*   
 Method 1:
 
    bool detectLoop(Node* head) {
        // code here
        Node* curr=head;
        
        unordered_map<Node*, bool> visited;
        
        while(curr != NULL) {
            if(visited[curr]==1)
            return 1;
            
            visited[curr]=1;
            curr=curr->next;
        }
        return 0;
    }
    */
    
    // Method 2:
    
    bool detectLoop(Node* head) {
        Node* slow=head, *fast=head;
        
        while(fast!=NULL && fast->next!=NULL) {
            
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            
            return 1; // loop exist
        }
        
        return 0;
    }
};