#include<iostream>
using namespace std;

void printOdd(int n) {
	if(n==1) {
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	printOdd(n-2);
}

int main()
{
	int num=14;
	if(num%2==0) {
		num--;
	}
	printOdd(num);
	
	return 0;
}
