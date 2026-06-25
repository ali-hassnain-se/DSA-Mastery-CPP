class Solution {
  public:
    int findSubString(string& str) {
        // code here
        
/*
Brute Force Approach, TC=O(N^2), SC=O(1)

        vector<bool> count(26, false);
        int total_Distinct=0;
        
        for(int i=0;i<str.size();i++) {
            
            if(count[str[i]-'a']==false) {
                count[str[i]-'a']=true;
                total_Distinct++;
            }
        }
        
        int minLen=INT_MAX;
        
        for(int i=0;i<str.size();i++) {
            vector<bool> windowCount(26, false);
            int distinctInWindow=0;
            
            for(int j=i;j<str.size();j++) {
                
                if(windowCount[str[j]-'a']==false) {
                    windowCount[str[j]-'a']=true;
                    distinctInWindow++;
                }
                
                if(distinctInWindow==total_Distinct) {
                    minLen=min(minLen, j-i+1);
                    break;
                }
            }
        }
        
        return minLen;
    */
    
// Optimized Approach, Sliding Window Protocol, TC=O(N), SC=O(1)

        vector<int> count(256, 0);
        
        int first=0, second=0, len=str.size(), distinct=0;
        
        while(first<str.size()) {
            if(count[str[first]]==0)
            distinct++;
            
            count[str[first]]++;
            first++;
        }
        
        for(int i=0;i<256;i++) {
            count[i]=0;
        }
        
        first=0;
        
        while(second<str.size()) {
            
            // while distinct exist
            while(distinct && second<str.size()) {
                if(count[str[second]]==0)
                distinct--;
                
                count[str[second]]++;
                second++;
            }
            
            len=min(len, second-first);
            
            // while distinct becomes 1
            
            while(distinct!=1) {
                len=min(len, second-first);
                count[str[first]]--;
                
                if(count[str[first]]==0)
                distinct++;
                
                first++;
            }
        }
        
        return len;
    }
};