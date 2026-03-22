class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        
        // Sum of all elements in an array
        
        long long sum=0;
        for(int i=0;i<arr.size();i++) {
        sum+=arr[i];
        }
        //Sum of N numbers
        long long n=arr.size()+1;
        
        long long ans=n*(n+1)/2;
        
        return (int)(ans-sum);
    }
};