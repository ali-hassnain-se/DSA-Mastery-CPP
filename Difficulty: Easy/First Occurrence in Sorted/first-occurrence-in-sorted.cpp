class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int st=0, end=n-1, result=-1;
        
        while(st<=end) {
            
            int mid=st+(end-st)/2;
            
            if(arr[mid]==k) {
                result=mid;
                end=mid-1;  
            }
            
            else if(arr[mid]<k)
            st=mid+1;  // right side search
            
            else 
            end=mid-1; // left side search
        }
        
        return result;
    }
};