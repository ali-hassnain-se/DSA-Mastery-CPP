// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int st=0, end=s.size()-1;
        
        while(st<end) {
            int temp=s[st];  // we can also use swap(s[st], s[end]) function
            s[st]=s[end];
            s[end]=temp;
            
            st++;
            end--;
        }
        
        return s;
    }
};
