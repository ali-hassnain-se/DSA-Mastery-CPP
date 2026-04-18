class Solution {
public:
    int shipWithinDays(vector<int>& arr, int days) {
        int st=0, end=0, mid, ans=1, n=arr.size();

        for(int i=0;i<n;i++) {
            if(arr[i]>st) {
                st=arr[i];
            }

            end+=arr[i];
        }

        while(st<=end) {
            mid=st+(end-st)/2;

            int weight=0, count=1;

            for(int i=0;i<n;i++) {
                weight+=arr[i];

                if(weight>mid) {
                    count++;
                    weight=0;
                    weight+=arr[i];
                }
            }

             if(count<=days) {
            ans=mid;
            end=mid-1;
        }

        else 
        st=mid+1;
        }


        return ans;
    }

};