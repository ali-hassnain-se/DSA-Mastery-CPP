class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int> alpha(26,0);
        
        for(int i=0;i<s.size();i++) {
            alpha[s[i]-'a']++;
        }
        
        s.clear();
/*  string ans;
    if we use this it contains extra space that's why our code will not
    be optimized so we don't use this.
    */
        
        for(int i=0;i<26;i++) {
            char c='a'+i;
            
            while(alpha[i]) {
            //  ans+=c;
                s+=c;
                
                alpha[i]--;
            }
        }
        
    // return ans;
        return s;
    }
};