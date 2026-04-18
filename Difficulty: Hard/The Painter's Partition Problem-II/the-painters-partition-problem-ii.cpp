class Solution {
  public:
    int minTime(vector<int>& arr, int m) {
        // code here
        int st=0, end=0, mid, ans=-1, n=arr.size();
    
    if(m>n) 
    return -1;
    
    
    for(int i=0;i<n;i++) {
        if(arr[i]>st) {
            st=arr[i];
        }
        end+=arr[i];
    }
    
    while(st<=end) {
        mid=st+(end-st)/2;
        
        int pages=0, count=1;
        for(int i=0;i<n;i++) {
            pages+=arr[i];
            if(pages>mid) {
                count++;
                pages=0;
                pages+=arr[i];
            }
        }
        
        if(count<=m) {
            ans=mid;
            end=mid-1;
        }
        else 
        st=mid+1;
    }
    
    return ans;
    }
};