#include<iostream>
using namespace std;

int count(string s, int idx) {
    if(idx==-1)  // Base Case
    return 0;

    if(s[idx]!='a' && s[idx]!='e' && s[idx]!='i' && s[idx]!='o' && s[idx]!='u')
    return 1+count(s, idx-1);

    return count(s, idx-1);
}

int main()
{
    string s="rohit";

    cout<<"Consonants Are: "<<count(s, 4)<<endl;

    return 0;
}