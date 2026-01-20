#include<iostream>
using namespace std;

void printOdd(int n) {
	if(n==1) {
		cout<<n<<" ";
		return;
	}
	printOdd(n-2);
	cout<<n<<" ";
}

int main()
{
	int num=14;
	if(num%2==0) {  // if number is even, it will became it odd
		num--;
	}
	printOdd(num);
	
	return 0;
}
