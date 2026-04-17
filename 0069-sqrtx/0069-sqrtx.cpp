class Solution {
public:
    int mySqrt(int x) {
        
        if(x<2)
        return x;

        int st=1, end=x, mid, ans;

        while(st<=end) {
            mid=st+(end-st)/2;

            if(mid==x/mid) {
                ans=mid;  // we can also write
                break;   //  return mid; 
            }

            else if(mid<x/mid) {
                ans=mid;
                st=mid+1;
            }

            else 
            end=mid-1;
        }

        return ans;
    }
};