class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        
        for(int i=0;i<s.size();i++) {
            if(s[i]==' ') {
            s.erase(i,1);
            i--;
            }
        }
        
        return s;
    }
};