#include<iostream>
using namespace std;

bool checkPalindrome(string str, int st, int end) {
	if(st>=end) { // if string is Palindrome return 1
		return 1;
	}
	if(str[st]!=str[end]) {  // if not palindrome return 0
		return 0;
	}
	return checkPalindrome(str, st+1, end-1);
}

int main()
{
	string str="naman";
	cout<<checkPalindrome(str, 0, 4)<<endl; // 1
	
	return 0;
}