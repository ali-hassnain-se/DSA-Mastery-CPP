class Solution {
public:

// Function to find LPS(Longest Prefix Suffix) in needle string
    void findLPS(vector<int>& lps, string s) {
        int pre=0, suf=1;

        while(suf<s.size()) {
            if(s[pre]==s[suf]) {
                lps[suf]=pre+1;
                pre++;
                suf++;
            }

            else {
                if(pre==0) {
                    lps[suf]=0;
                    suf++;
                }
                else
                pre=lps[pre-1];
            }
        }
    }

    int strStr(string haystack, string needle) {

    /* 
      First Method, Brute Force Approach, TC=O(N*M), SC=O(1)

        int n=haystack.size(), m=needle.size();
        for(int i=0;i<n-m;i++) {
            int first=i, second=0;

            while(second<m) {
                if(haystack[first]!=needle[second]) {
                    break;
                }

                else {
                    first++;
                    second++;
                }
            }

            if(second==m)
            return first-second;
        }

        return -1;
    */

// Second Method, Optimized Approach, Using KMP Algorithm
// TC=O(N+M), SC=O(M)

    int n=haystack.size(), m=needle.size();

    vector<int> lps(m, 0);

    findLPS(lps, needle);

    int first=0, second=0;

    while(first<n && second<m) {
        // Match
        if(haystack[first]==needle[second]) {
            first++;
            second++;
        }
        // Not Matched
        else {
            if(second==0) {
                first++;
            }
            else
            second=lps[second-1];
        }
    }

    // Answer Exists
    if(second==m)
    return first-second;

    // Not Exists
    return -1;
    }
};