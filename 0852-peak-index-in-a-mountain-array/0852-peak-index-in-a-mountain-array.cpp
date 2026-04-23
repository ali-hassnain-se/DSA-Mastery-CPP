class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1, end=arr.size()-2, mid;  // st=0, end=arr.size()-1;

        while(st<=end) {
            mid=st+(end-st)/2; // mid=end+(st-end)/2;   

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return mid;

            else if(arr[mid]>arr[mid-1])
            st=mid+1;

            else 
            end=mid-1;
        }

        return -1;
    }
};