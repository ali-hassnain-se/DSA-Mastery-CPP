class Solution {
  public:
    bool isPanagram(string &sentence) {
        // Your code here
       vector<bool> alpha(26, 0);

        for(int i=0;i<sentence.size();i++) {
            
            alpha[tolower(sentence[i])-'a']=1;
            /* we can also write like this:
            int index=sentence[i]-'a';
            alpha[index]=1;
            */
        }

        for(int i=0;i<26;i++) {
            if(alpha[i]==0)
            return 0;
        }

        return 1;
    }
};