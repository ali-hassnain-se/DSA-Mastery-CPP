class Solution {
  public:
    int lastIndex(string s) {
    // First Method    
        
        int ans=-1;
        
        for(int i=0;i<s.size();i++) {
            if(s[i]=='1')
            ans=i;
        }
        
        return ans;
        
/* Second Method, Reverse iteration

    for(int i=s.size()-1;i>=0;i--) {
        if(s[i]=='1')
        return i;
    }
    
    return -1;
*/
    }
};