class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
/* 
  First Method, Brute Force Approach
  Time Complexity=O(N^2), Space Complexity=O(N^2)

        int n=matrix.size();
        vector<vector<int>> ans(n, vector<int> (n));

        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                ans[j][n-1-i]=matrix[i][j];
            }
        }

        matrix=ans;
*/

// Second Method, Optimized Approach
// Time Complexity=O(N^2), Space Complexity=O(1)

        int n=matrix.size();
        // Transpose
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse Each Row
        for(int i=0;i<n;i++) {
        int st=0, end=n-1;
            while(st<end) {
                swap(matrix[i][st], matrix[i][end]);
                st++;
                end--;
            }
        }

    }
};