class Solution {
  public:
    char firstRep(string s) {
        // code here.
        
/* First Method, Brute Force, TC=O(N^2), SC=O(1) 

        int n = s.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j && s[i] == s[j]) {
                    return s[i];
                }
            }
        }
        
        return '#';
    */
        
// Second Method, Optimized Approach, TC=O(N), SC=O(1)

        int n = s.size();
        
        vector<int> freq(26, 0);
        
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        
        for(int i = 0; i < n; i++) {
            if(freq[s[i] - 'a'] > 1) {
                return s[i];
            }
        }
        
        return '#';
    }
};