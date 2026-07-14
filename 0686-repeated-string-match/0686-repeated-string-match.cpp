class Solution {
public:

   void find_LPS(string s, vector<int>& lps) {
    int pre=0, suf=1;

    while(suf<s.size()) {
        if(s[pre]==s[suf]) {
            lps[suf]=pre+1;
            pre++;
            suf++;
        }

        else {
            if(pre==0)
            suf++;

            else
            pre=lps[pre-1];
        }
    }
   }

    bool kmp_match(string haystack, string needle) {
        vector<int> lps(needle.size(), 0);

        find_LPS(needle, lps);

        int first=0, second=0;

        while(first<haystack.size() && second<needle.size()) {
            if(haystack[first]==needle[second]) {
                first++;
                second++;
            }

            else {
                if(second==0)
                first++;

                else
                second=lps[second-1];
            }
        }

        if(second==needle.size())
        return 1;

        return 0;
    }


    int repeatedStringMatch(string a, string b) {
/*
  First Method, Brute Force Approach
  Here n=temp.size() and temp.size()=[a.size()+b.size()], m=b.size(), So TC and SC will beequals to:-  
                Time Complexity=O(n*m), Space Complexity=O(n)


        if(a==b)
        return 1;

        string temp=a;

        int repeat=1;

        while(temp.size()<b.size()) {
            temp+=a;
            repeat++;
        }

        int n=temp.size(), m=b.size();
        
        for(int i=0;i<=n-m;i++) {
            int j=0;
            for(j=0;j<m;j++) {
                if(temp[i+j]!=b[j])
                break;
            }
            if(j==m)
            return repeat;
        }

        temp+=a;
        repeat++;
        n=temp.size();

        for(int i=0;i<=n-m;i++) {
            int j=0;
            for(j=0;j<m;j++) {
                if(temp[i+j]!=b[j])
                break;
            }
            if(j==m)
            return repeat;
        }

        return -1;
    */

// Second Method, Optimized Approach, KMP Algorithm
// TC=O(n+m), SC=O(n+m)

   
    if(a==b)
    return 1;

    int repeat=1;
    string temp=a;

    while(temp.size()<b.size()) {
        temp+=a;
        repeat++;
    }

    // KMP pattern search
    if(kmp_match(temp, b)==1)
    return repeat;

    // temp+a, KMP search
    if(kmp_match(temp+a, b)==1)
    return repeat+1;


    return -1;
    }
};