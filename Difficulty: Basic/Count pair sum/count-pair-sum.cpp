
class Solution {
  public:
    int countPairs(vector<int>& arr1, vector<int>& arr2, int x) {
        // code here.
/* Brute Force, Time Complexity=O(n*m)
        
        pair<int, int> p;
        
        for(int i=0;i<arr1.size();i++) {
            for(int j=0;j<arr2.size();j++) {
                p=make_pair(arr1[i], arr2[j]);
                
                if(p.first+p.second==x)
                return i;
            }
        }
        
        return 0;
    */
    
// Optimized Approach, Time Complexity=O(n+m)    
    unordered_set<int> s;
    
    for(int i=0;i<arr1.size();i++) {
        s.insert(arr1[i]);
    }
    
    int count=0;
    
    for(int j=0;j<arr2.size();j++) {
        int need=x-arr2[j];
        
        if(s.find(need)!=s.end())
        count++;
    }
    
    return count;
    }
};