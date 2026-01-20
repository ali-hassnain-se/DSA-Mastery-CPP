#include<iostream>
using namespace std;

void print(int num, int n) {
	if(num==n) {
		cout<<num<<" ";
		return;
	}
	cout<<num<<" ";
	print(num+1, n);
}

int main()
{
	int n=5;
	print(1, n);
	
	return 0;
}
