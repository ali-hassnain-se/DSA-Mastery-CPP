class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    // Time Complexity=O(row*col)

        vector<int> ans;

        int row=matrix.size(), col=matrix[0].size();
        int top=0, bottom=row-1, left=0, right=col-1;

        while(top<=bottom && left<=right) {
            // print top
            for(int i=left;i<=right;i++)
            ans.push_back(matrix[top][i]);
            top++;

            // print right
            for(int j=top;j<=bottom;j++)
            ans.push_back(matrix[j][right]);
            right--;

            // print bottom
            if(top<=bottom) {
                for(int i=right;i>=left;i--)
                ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // print left
            if(left<=right) {
                for(int j=bottom;j>=top;j--)
                ans.push_back(matrix[j][left]);
                left++;
            }
        }

        return ans;
    }
};