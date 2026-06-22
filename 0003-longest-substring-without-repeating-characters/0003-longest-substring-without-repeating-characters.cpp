class Solution {
public:
    int lengthOfLongestSubstring(string s) {
/* First Method, Brute Force Approach, Time Complexity=O(N^2)

        int len = 0, n = s.size();

        for (int st = 0; st < n; st++) {
            vector<bool> count(256, 0);
            for (int end = st; end < n; end++) {
                if (count[s[end]]) {
                    break;
                }

                count[s[end]] = 1;

                len = max(len, end - st + 1);
            }
        }
        return len;
    */

        // Optimized Method Using Sliding Window
        // Time Complexity=O(N), Space Complexity=O(1)

        vector<bool> count(256, 0);

        int first=0, second=0, len=0;

        while(second<s.size()) {
            // repeating character
            while(count[s[second]]) {
                count[s[first]]=0;
                first++;
            }

            count[s[second]]=1;

            len=max(len, second-first+1);
            second++;
        }

        return len;
    }
};