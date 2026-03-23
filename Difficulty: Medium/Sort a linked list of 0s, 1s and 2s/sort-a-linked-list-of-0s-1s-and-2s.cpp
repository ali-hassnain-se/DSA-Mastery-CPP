/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        
        /* Method 1:
        
        Node* curr=head;
        int count0=0, count1=0, count2=0;
        
        while(curr) {
            if(curr->data==0)
            count0++;
            
            else if(curr->data==1)
            count1++;
            
            else 
            count2++;
            
            curr=curr->next;
        }
        
        curr=head;
        
        while(count0--) {
            curr->data=0;
            curr=curr->next;
        }
        
        while(count1--) {
            curr->data=1;
            curr=curr->next;
        }
        
        while(count2--) {
            curr->data=2;
            curr=curr->next;
        }
        
        return head;
        
    */
    
    
    //Method 2:
    
    Node* head0=new Node(0), *head1=new Node(0), *head2=new Node(0);
    Node* tail0=head0, *tail1=head1, *tail2=head2;
    
    Node* curr=head;
    
    while(curr) {
        if(curr->data==0) {
            tail0->next=curr;
            tail0=tail0->next;
        }
        
        else if(curr->data==1) {
        tail1->next=curr;
        tail1=tail1->next;
        }
        
        else {
            tail2->next=curr;
            tail2=tail2->next;
        }
        
        curr=curr->next;
    }
    
    
    if(head1->next!=NULL) {
        
        tail0->next=head1->next;
        
        tail1->next=head2->next;
    }
    else {
        
        tail0->next=head2->next;
    }
    tail2->next=NULL;
    
    head=head0->next;
    
    delete head0;
    delete head1;
    delete head2;
    
    return head;
    }
};