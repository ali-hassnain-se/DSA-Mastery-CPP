class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        
// Time Complexity=O(n+m), Space Complexity=O(1)        
        
        vector<bool> unique1(26, 0);
        vector<bool> unique2(26, 0);
        
        string uncommon;
        
        int n=s1.size(), m=s2.size();
        
        for(int i=0;i<n;i++) {
            unique1[s1[i]-'a']=1;
        }
        
        for(int i=0;i<m;i++) {
            unique2[s2[i]-'a']=1;
        }
        
        for(int i=0;i<26;i++) {
            if(unique1[i]!=unique2[i]) {
                uncommon.push_back('a'+i);
            }
        }
        
        return uncommon;
    }
};
