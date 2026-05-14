class Solution {
public:
    string sortSentence(string s) {
    // Time Complexity=O(N)
    // Space Complexity=O(1)

        vector<string> ans(10);

        string temp;

        int count=0, index=0, pos;

        while(index<s.size()) {
            if(s[index]==' ') {
                pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
                index++;
            }

            else {
                temp+=s[index];
                index++;
            }
        }

                pos=temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;

                for(int i=1;i<=count;i++) {
                    temp+=ans[i];
                    temp+=' ';
                }

                temp.pop_back();

                return temp;
    }
};