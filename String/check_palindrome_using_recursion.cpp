#include<iostream>
using namespace std;

bool check_pal(string s, int st, int end) {
    if(st>=end)  // Base Case
    return 1;

    if(s[st]!=s[end])
    return 0;

    return check_pal(s, st+1, end-1);
}

int main()
{
    string str="namon";

    cout<<check_pal(str, 0, 4)<<endl;

    return 0;
}