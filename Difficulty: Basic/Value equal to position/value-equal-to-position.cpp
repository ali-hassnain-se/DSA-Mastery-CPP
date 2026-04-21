class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int> pos;
        
        for(int i=0;i<arr.size();i++) {
            if(arr[i]==i+1) {
                pos.push_back(arr[i]);
            }
        }
        
        return pos;
    }
};