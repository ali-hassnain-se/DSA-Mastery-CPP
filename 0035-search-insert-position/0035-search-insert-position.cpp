class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        
        int st=0, end=arr.size()-1, mid, ans=arr.size();

        while(st<=end) {
            mid=st+(end-st)/2;

            if(arr[mid]==target) {
                ans=mid;
                break;
            }

            else if(arr[mid]<target)
            st=mid+1;

            else {
                ans=mid;
                end=mid-1;
            }
        }

        return ans;
    }
};