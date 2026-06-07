class Solution {
public:
    int lengthOfLongestSubstring(string s) {
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