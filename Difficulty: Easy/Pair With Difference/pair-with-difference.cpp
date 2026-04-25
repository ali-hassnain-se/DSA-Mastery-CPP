
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        // code here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        
        int st=0, end=1;
        
        if(x<0)
        x=x*-1;
        
        while(end<n) {
            // Subtraction is equal to x
            if(arr[end]-arr[st]==x)
            return true;
            
            // Subtraction is less than x
            else if(arr[end]-arr[st]<x)
            end++;
            
            // Subtraction is greater than x
            else 
            st++;
            
            // if start equals to end
            if(st==end)
            end++;
        }
        
        return false;
    }
};
