#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int maxOfTwo(vector<int> &arr) {
    int n=arr.size();
/*
First Method, Time Complexity=O(N^2)

    int ans=INT_MIN;

    for(int i=0;i<n-1;i++) {

        for(int j=i+1;j<n;j++) {
            ans=max(ans, arr[j]-arr[i]);
        }
    }

    return ans;
}
*/

// Second Method, Optimized Approach
// Time Complexity=O(N)

    vector<int> suffix(n);
    suffix[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--) 
       suffix[i] = max(arr[i], suffix[i+1]);
    

    int ans=INT_MIN;

    for(int i=0;i<n;i++) 
        ans=max(ans, suffix[i]-arr[i]);
    

    return ans;
}

int main()
{
    vector<int> arr={9, 5, 8, 12, 2, 3, 7, 4};

    cout<<"Maximum Difference Between Two Elements: "<<maxOfTwo(arr)<<endl;

    return 0;
}