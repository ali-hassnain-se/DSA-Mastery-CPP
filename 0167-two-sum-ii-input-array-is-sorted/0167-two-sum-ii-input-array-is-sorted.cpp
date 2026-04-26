class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

/*      
    1st Method, Brute Force Approach, Time Complexity= O(Square Of N)

        int n=arr.size();

        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(arr[i]+arr[j]==target) {
                    return {i+1, j+1};
                }
            }
        }
        return {};
    }
  */

/*
   2nd Method, Using Binary Search, Time Complexity=O(NlogN)

  vector<int> ans;

  int n=arr.size();

  for(int i=0;i<n-1;i++) {
    int x=target-arr[i];

    int st=i+1, end=n-1, mid;

    while(st<=end) {
        mid=st+(end-st)/2;

        if(arr[mid]==x) {
            return {i+1, mid+1};
        }

        else if(arr[mid]<x) 
        st++;

        else 
        end--;
    }
  }

  return {};
}
*/

// 3rd Method, Using Two Pointer Approach, Time Complexity=O(N)

        vector<int> ans;

        int st=0, end=arr.size()-1;

        while(st<end) {
            if(arr[st]+arr[end]==target) {
                ans.push_back(st+1);
                ans.push_back(end+1);

                return ans;
            }

            else if(arr[st]+arr[end]<target) 
                st++;

            else 
            end--;    
        }

        return ans;
    }  
};