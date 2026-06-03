class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        int n=s.size();
        
        char stack[n];
        int top=-1;
        
        for(int i=0;i<n;i++) {
            char ch=s[i];
            
            if(ch=='(' || ch=='{' || ch=='[') {
                top++;
                stack[top]=ch;
            }
            
            else {
                if(top==-1)
                return false;
                
                char topChar=stack[top];
                
                if((ch==')' && topChar=='(') ||
                (ch=='}' && topChar=='{') ||
                (ch==']' && topChar=='[')) {
                    top--;
                }
                
                else {
                    return false;
                }
            }
        }
        
        if(top==-1) {
            return true;
        }
        
        else {
            return false;
        }
    }
};