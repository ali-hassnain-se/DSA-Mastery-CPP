class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
/*  
First Method, Time Complexity=O(N^2)    

        int n=arr.size();
        
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++) {
            int prefix=0;
            
            for(int j=i;j<n;j++) {
                prefix+=arr[i];
                maxi=max(prefix, maxi);
            }
        }
        
        return maxi;
*/       

//  Second Method, Time Complexity=O(N)
// Kadane's Algorithm

    int n=arr.size();
    
    int maxi=INT_MIN, prefix=0;
    
    for(int i=0;i<n;i++) {
        prefix+=arr[i];
        maxi=max(prefix, maxi);
        
        if(prefix<0)
        prefix=0;
    }
    
    return maxi;
    }
};