class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        
        bool b=false;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1' || s[i]=='0')
            b=true;
            else {
                b=false;
                break;
            }
        }
        
        return b;
    }
};