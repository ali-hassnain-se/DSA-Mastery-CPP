class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
/* Brute Force Approach, Time Complexity=O(n*m)        
        
        string uncommon="";
        
        int n=s1.size(), m=s2.size();
        
        char ch;
        
        for(int i=0;i<n;i++) {
            bool flag1=false;
            for(int j=0;j<m;j++) {
                if(s1[i]==s2[j]) {
                flag1=true;
                break;
                }
            }
            
            if(flag1==false && s1[i]!=ch)
            uncommon.push_back(s1[i]);
            
            ch=s1[i];
        }
        
        for(int i=0;i<m;i++) {
            bool flag2=false;
            for(int j=0;j<n;j++) {
                if(s2[i]==s1[j]) {
                flag2=true;
                break;
                }
            }
            
            if(flag2==false && s2[i]!=ch)
            uncommon.push_back(s2[i]);
            
            ch=s2[i];
        }
        
        sort(uncommon.begin(), uncommon.end());
        
        return uncommon;
*/
        
// Optimized Approach, Time Complexity=O(n+m), Space Complexity=O(1)        
        
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
