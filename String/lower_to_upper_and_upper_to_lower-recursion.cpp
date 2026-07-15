#include<iostream>
using namespace std;

void lowerToUpper(string& s, int idx) {
    if(idx==-1)
    return;

    s[idx]='A'+(s[idx]-'a');

    lowerToUpper(s, idx-1);
}

void upperToLower(string& s, int idx) {
    if(idx==-1)
    return;

    s[idx]='a'+(s[idx]-'A');

    upperToLower(s, idx-1);
}

int main()
{
    string s1="rohit";

    lowerToUpper(s1, 4);

    cout<<"Lower To Upper: "<<s1<<endl;

    string s2="ROHIT";

    upperToLower(s2, 4);

    cout<<"Upper To Lower: "<<s2<<endl;

    return 0;
}