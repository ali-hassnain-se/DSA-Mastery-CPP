class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st=0, end=arr.size()-1, mid;

        while(st<=end) {
            mid=st+(end-st)/2;

           // I find my target
            if(arr[mid]==target)
            return mid;

           // Left Side Sorted
            else if(arr[mid]>=arr[st]) {
                if(arr[st]<=target && arr[mid]>target) 
                end=mid-1;

                else 
                st=mid+1;
            }

            // Right Side Sorted
            else {
                if(arr[mid]<target && arr[end]>=target)
                st=mid+1;

                else 
                end=mid-1;
            }
        }

        return -1;
    }
};