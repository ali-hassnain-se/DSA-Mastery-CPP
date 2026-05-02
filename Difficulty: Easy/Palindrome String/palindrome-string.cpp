class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int st=0, end=s.size()-1;
        
        while(st<end) {
            if(s[st]!=s[end]) 
            return false;
            
            st++;
            end--;
        }
        
        return true;
    }
};