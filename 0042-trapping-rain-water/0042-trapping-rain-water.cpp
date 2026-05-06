class Solution {
public:
    int trap(vector<int>& height) {
/*  
First Method, Time Complexity=O(N), Space Complexity=O(N)

        int n=height.size();
        
        vector<int> leftmax(n);
        leftmax[0]=0;
        
        vector<int> rightmax(n);
        rightmax[n-1]=0;
        
        for(int i=1;i<n;i++) 
        leftmax[i]=max(leftmax[i-1], height[i-1]);
        
        for(int i=n-2;i>=0;i--)
        rightmax[i]=max(rightmax[i+1], height[i+1]);
        
        int water=0, miniheight=0;
        
        for(int i=0;i<n;i++) {
            miniheight=min(leftmax[i], rightmax[i]);
            
            if(miniheight-height[i]>=0)
            water+=miniheight-height[i];
        }
        
        return water;
    */

 // Optimized Method, Time Complexity=O(N), Space Complexity=O(1)   

    int n=height.size(), water=0;

    int leftmax=0, rightmax=0, maxheight=height[0], index=0;

    // Max Height Building

    for(int i=1;i<n;i++) {
        if(maxheight<height[i]) {
        maxheight=height[i];
        index=i;
        }
    }

    // Left Part

    for(int i=0;i<index;i++) {
        if(leftmax>height[i])
        water+=leftmax-height[i];

        else
        leftmax=height[i];
    }

    // Right Part

    for(int i=n-1;i>index;i--) {
        if(rightmax>height[i])
        water+=rightmax-height[i];

        else
        rightmax=height[i];
    }

    return water;
    }
};