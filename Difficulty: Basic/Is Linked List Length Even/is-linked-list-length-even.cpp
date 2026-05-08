/*structure of a node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isEven(struct Node **head) {
        // Code here
        Node* temp=*head;  // because above use double pointers
                          // that's why we use thsi
        int count=0;
        
        while(temp) {
            count++;
            temp=temp->next;
        }
        
        if(count%2==0)
        return true;
        
        
        return false;
    }
};