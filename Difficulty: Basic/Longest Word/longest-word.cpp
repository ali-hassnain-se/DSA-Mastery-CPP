class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        
        string temp=arr[0];
        for(int i=1;i<arr.size();i++) {
            if(arr[i].length()>temp.length()) {
                temp=arr[i];
            }
        }
        
        return temp;
    }
};
