class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
/*
    Brute Force Approach, Time Complexity=O(N^3)
    
        int n=arr.size();
        
        for(int i=0;i<n-2;i++) {
            for(int j=i+1;j<n-1;j++) {
                for(int k=j+1;k<n;k++) {
                    if(arr[i]+arr[j]+arr[k]==target)
                    return 1;
                }
            }
        }
        
        return 0;
    */
    
/*
    Optimized Approach (Using Binary Search), 
    Time Complexity=O(N^2logN)
    
    first we sort the array because we using Binary Search
    
    
       sort(arr.begin(), arr.end());
       
       int n=arr.size();
       
       for(int i=0;i<n-2;i++) {
           for(int j=i+1;j<n-1;j++) {
               
               int find=target-arr[i]-arr[j];
               
               int st=j+1, end=n-1, mid;
               
               while(st<=end) {
                   mid=st+(end-st)/2;
                   
                   if(arr[mid]==find)
                   return 1;
                   
                   else if(arr[mid]<find)
                   st=mid+1;
                   
                   else
                   end=mid-1;
               }
           }
       }
       
       return 0;
    */
    
//  Most Optimized Approach (Using Two Pointer Approach)
//  Time Complexity=O(N^2) 


    sort(arr.begin(), arr.end());
    
    int n=arr.size();
    
    for(int i=0;i<n-2;i++) {
        
        int ans=target-arr[i];
        
        int st=i+1, end=n-1;
        
        while(st<end) {
            if(arr[st]+arr[end]==ans)
            return 1;
            
            else if(arr[st]+arr[end]<ans)
            st++;
            
            else
            end--;
        }
    }
    
    return 0;
    }
};