/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
  // function to reverse the list
  Node* reverse(Node* curr, Node* prev) {
      
      if(curr==NULL) {  // Base Case
          return prev;
      }
      
      Node* fut=curr->next;
      curr->next=prev;
      
      return reverse(fut, curr);
  }
  
  // helper function to remove leading zeros
  Node* removeLeadingZeros(Node* temp) {
      while(temp!=NULL && temp->next!=NULL && temp->data==0) {
          temp=temp->next;
      }
      
      return temp;
  }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        
        head1=removeLeadingZeros(head1);
        head2=removeLeadingZeros(head2);
        
        head1=reverse(head1, NULL);
        head2=reverse(head2, NULL);
        
        Node* curr1=head1;
        Node* curr2=head2;
        
        Node* dummy=new Node(0);
        Node* tail=dummy;
        
        int carry=0, sum=0;
        while(curr1 && curr2) {
            sum=curr1->data+curr2->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            curr2=curr2->next;
            
            carry=sum/10;
        }
        
        while(curr1) {
            sum=curr1->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            carry=sum/10;
        }
        
        while(curr2) {
            sum=curr2->data+carry;
            tail->next=new Node(sum%10);
            tail=tail->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        
        while(carry) {
            tail->next=new Node(carry%10);
            carry/=10;
        }
        
        Node* head=reverse(dummy->next, NULL);
        
        delete dummy;
        
        return head;
    }
};