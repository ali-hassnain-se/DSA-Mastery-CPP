/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
  
// Method 1:  
    bool isPalindrome(Node *head) {
        //  code here
    
       
      Node* curr=head;
      vector<int> ans;
      while(curr) {
          ans.push_back(curr->data);
          curr=curr->next;
      }
       
      int st=0, end=ans.size()-1;
       
      curr=head;
       
      while(st<end) {
          if(ans[st] != ans[end]) 
          return false;
           
          st++;
          end--;
      }
       
      return true;
    }
   

};