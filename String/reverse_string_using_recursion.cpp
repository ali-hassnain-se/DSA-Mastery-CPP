#include<iostream>
using namespace std;

void rev(string& s, int st, int end) {
    if(st>=end)  // Base Case
    return;

    // Swapping
    char c=s[st];
    s[st]=s[end];
    s[end]=c;

    rev(s, st+1, end-1);
}

int main()
{
    string s="rohit";

    rev(s, 0, 4);

    cout<<"Reversed String: "<<s<<endl;

    return 0;
}