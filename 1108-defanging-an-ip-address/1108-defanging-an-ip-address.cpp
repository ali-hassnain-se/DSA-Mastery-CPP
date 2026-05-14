class Solution {
public:
    string defangIPaddr(string address) {
    // Time Complexity=O(N), Space Complexity=O(N)
        
        int index=0;

        string ans;

        while(index<address.size()) {
            if(address[index]=='.') 
                ans+="[.]";

            else 
                ans+=address[index];


                index++;
        }

        return ans;
    }
};