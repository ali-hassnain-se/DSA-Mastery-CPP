class Solution {
public:
    int findMin(vector<int>& arr) {
        int st=0, end=arr.size()-1, mid, ans=arr[0];

        while(st<=end) {
            mid=st+(end-st)/2;
           // Left Side Sorted Array
            if(arr[mid] >= arr[0])
            st=mid+1;

            // Right Side Sorted Array
            else {
                ans=arr[mid];
                end=mid-1;
            }
        }

        return ans;
    }
};