class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int st=0, end=arr.size()-1, first=-1, last=-1, mid;
        
        while(st<=end) {
            mid=st+(end-st)/2;
            
            if(arr[mid]==x) {
                first=mid;
                end=mid-1;
            }
            
            else if(arr[mid]<x) 
            st=mid+1;
            
            else 
            end=mid-1;
        }
        
        st=0, end=arr.size()-1;
        while(st<=end) {
            mid=st+(end-st)/2;
            
            if(arr[mid]==x) {
                last=mid;
                st=mid+1;
            }
            
            else if(arr[mid]<x) 
            st=mid+1;
            
            else 
            end=mid-1;
        }
        
        vector<int> a(2);
        a[0]=first;
        a[1]=last;
        
        return a;
    }
};