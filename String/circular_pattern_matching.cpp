#include<iostream>
#include<string>
#include<vector>
using namespace std;

void findLPS(vector<int>& lps, string s) {
    int pre=0, suff=1;

    while(suff<s.size()) {
        if(s[pre]==s[suff]) {
            lps[suff]=pre+1;
            pre++;
            suff++;
        }

        else {
            if(pre==0)
            suff++;

            else
            pre=lps[pre-1];
        }
    }
}

bool stringMatch(string s1, string s2, int n, int m, vector<int> lps) {
    int first=0, second=0;

    while(first<n && second<m) {
        if(s1[first]==s2[second]) {
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

    // matched
    if(second==m)
    return 1;

    // not matched
    else
    return 0;
}

int main()
{
    string s1="cdeabroab";
    string s2="abcde";

    s1.append(s1);

    int n=s1.size(), m=s2.size();

    vector<int> lps(m, 0);
    findLPS(lps, s2);

    int ans=stringMatch(s1, s2, n, m, lps);

    if(ans==1) 
    cout<<"Matched"<<endl;

    else
    cout<<"Not Matched"<<endl;

    return 0;
}