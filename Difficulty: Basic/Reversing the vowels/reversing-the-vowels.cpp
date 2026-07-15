class Solution {
  public:
    string modify(string& s) {
        // code here
        
        string temp="";
        for(int i=0;i<s.size();i++) {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
                temp+=s[i];
                s[i]='#';
            }
        }
        
        reverse(temp.begin(), temp.end());
        
        int j=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='#') {
                s[i]=temp[j];
                j++;
            }
        }
        
        return s;
    }
};
