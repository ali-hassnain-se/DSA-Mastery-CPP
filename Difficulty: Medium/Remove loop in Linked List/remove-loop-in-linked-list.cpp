/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
/*        Method 1:

    void removeLoop(Node* head) {
        // code here
        
        
        Node* slow=head, *fast=head;
        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        if(!fast || !fast->next) 
        return;
        
        slow=head;
        while(slow!=fast) {
            slow=slow->next;
            fast=fast->next;
        }
        
        while(slow->next != fast) {
            slow=slow->next;
        }
        
        slow->next=NULL;
        
    }
*/

    //Method 2:

    void removeLoop(Node* head) {
        Node* slow=head, *fast=head;
        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            break;
        }
        
        if(!fast || !fast->next) 
        return;
        
        slow=fast->next;
        int count=1;
        while(slow!=fast) {
            count++;
            slow=slow->next;
        }
        
        slow=head, fast=head;
        
        while(count--) {
            fast=fast->next;
        }
        
        while(slow!=fast) {
            slow=slow->next;
            fast=fast->next;
        }
        
        while(slow->next!=fast) {
            slow=slow->next;
        }
            
        slow->next=NULL;
    }
    
};