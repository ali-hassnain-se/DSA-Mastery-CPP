// User function Template for C++

class Solution {
  public:
    string toLower(string& s) {
        // code here
        for(int i=0;i<s.size();i++) {
            s[i]=tolower(s[i]);
        }
        
        return s;
    }
};