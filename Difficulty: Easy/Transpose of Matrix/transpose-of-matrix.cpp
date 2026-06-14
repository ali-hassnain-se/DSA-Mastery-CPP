class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // code here
        
/* first method, brute force approach, TC=O(N^2), SC=O(N^2)
   
   vector<vector<int>> ans;
   
   for(int i=0;i<n;i++) {
       for(int j=0;j<n;j++) {
           ans[j][i]=matrix[i][j];
       }
   }
   
   return ans;
*/

// Optimized Approach, TC=O(N^2), SC=O(1)

        for(int i=0;i<matrix.size()-1;i++) {
            for(int j=i+1;j<matrix.size();j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        return matrix;
    }
};