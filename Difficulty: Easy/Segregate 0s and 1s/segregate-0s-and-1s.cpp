class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        // First Method USING SLOW AND FAST POINTER
        
        int n=arr.size();
        int st=0, end=n-1;
        
        while(st<end) {
            if(arr[st]==0)
            st++;
            
            else {
                if(arr[end]==0) {
                    swap(arr[st], arr[end]);
                    st++;
                    end--;
                }
                
                else
                end--;
            }
        }
        
        /* Second Method USING COUNT OF 0s AND 1s
        
        int count0=0, count1=0;
        
        for(int i=0;i<n;i++) {
            if(arr[i]==0)
            count0++;
            
            else
            count1++;
        }
        
        for(int i=0;i<count0;i++) {
            arr[i]=0;
        }
        
        for(int i=count0;i<n;i++) {
            arr[i]=1;
        }
        */
        
    }
};