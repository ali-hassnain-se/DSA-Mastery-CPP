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
    bool areIdentical(Node *head1, Node *head2) {
        // code here
/*        
    Brute Force Approach
    
        vector<int> h1;
        vector<int> h2;
        
        Node* temp1=head1, *temp2=head2;
        
        while(temp1) {
            h1.push_back(temp1->data);
            temp1=temp1->next;
        }
        
        while(temp2) {
            h2.push_back(temp2->data);
            temp2=temp2->next;
        }
        
        if(h1.size()>h2.size() || h1.size()<h2.size())
        return false;
        
        for(int i=0;i<h1.size();i++) {
            if(h1[i]!=h2[i])
            return false;
        }
        
        return true;
    */
    
// Optimised Approach    
    
    Node* temp1=head1, *temp2=head2;
    
    while(temp1 && temp2) {
        if(temp1->data!=temp2->data) 
        return false;
        
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    if(temp1 || temp2)  /* it means if temp1 exists or temp2 exist,
                        we return false because one of temp1 or temp2
                        may have a larger size.   */
    return false;
    
// other wise return true    
    
    return true;
    }
};