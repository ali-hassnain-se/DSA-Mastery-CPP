class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
/*
    Brute Force Approach, Time Complexity=O(N*M)
        
        int count=0;
        
        for(int i=0;i<b.size();i++) {
            for(int j=0;j<a.size();j++) {
                if(b[i]==a[j]) {
                    a[j]=-1;
                    count++;
                    break;
                }
            }
        }
        
        if(count==b.size()) {
            return true;
        }
        
        
        return false;
*/
    
//  Optimized Method, Time Complexity=O(N+M), Space Complexity=O(N)    
    
    unordered_map<int, int> freq;
    
    // put elements of a in map
    for(int i = 0; i < a.size(); i++) {
        freq[a[i]]++;
    }
    
    // now check elements of b
    for(int i = 0; i < b.size(); i++) {
        if(freq[b[i]] == 0)
            return false;
        freq[b[i]]--;
    }
    
    return true;
    }
};