class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        unordered_map<int, int> freq;
        
        for(int i=0; i<arr.size(); i++) {
            freq[arr[i]]++;
        }
        
        for(auto &p : freq) {
            if(p.second % 2 != 0) {
                return p.first;
            }
        }
        
        return -1;
    }
};