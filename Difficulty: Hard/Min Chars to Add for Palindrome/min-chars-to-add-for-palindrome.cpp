class Solution {
  public:
    int minChar(string &s) {
        // code here
// Optimized Approach, Using KMP Algorithm, TC=O(N), SC=O(N)

        // string reverse
        string rev=s;
        reverse(rev.begin(), rev.end());
        int oldN=s.size();
        s+='$';     // seperator
        s+=rev;  // reverse
        
        // Find Lps
        int n=s.size();
        vector<int> lps(n, 0);
        
        int pre=0, suf=1;
        
        while(suf<s.size()) {
            // Match
            if(s[pre]==s[suf]) {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }
            // Not Matched
            else {
                if(pre==0) 
                    suf++;
                
                else
                pre=lps[pre-1];
            }
        }
        
        return oldN-lps[n-1];
    }
};
