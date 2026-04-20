class Solution {
  public:
    int kokoEat(vector<int>& arr, int h) {
        // Code here
        int start=0, end=0, n=arr.size(), mid, ans;
        
        long long sum=0;  /* value can me consume more space that's why
                          i use long long data type */
        
        for(int i=0;i<n;i++) {
            sum+=arr[i];
            end=max(end, arr[i]);
        }
        
        start=sum/h;
        
        if(!start)  // if start becomes zero then increase it by one
        start=1;
        
        while(start<=end) {
            mid=start+(end-start)/2;
            // mid: amount of eating bananas per hour
            
            int total_time=0;
            for(int i=0;i<n;i++) {
                total_time+=arr[i]/mid;
                
                if(arr[i]%mid)
                total_time++;
            }
            
            if(total_time>h)  // right side
            start=mid+1;
            
            else {   // left side
                ans=mid;
                end=mid-1;
            }
        }
        
        return ans;
    }
};