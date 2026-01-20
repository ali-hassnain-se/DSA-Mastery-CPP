#include<iostream>
using namespace std;

void printEven(int n) {
	if(n==2) {
		cout<<n<<" ";
		return;
	}
	printEven(n-2);
	cout<<n<<" ";
}

int main()
{
	int num=13;
	if(num%2==1) {   // if number is even, it will became it odd
		num--;
	}
	printEven(num);
	
	return 0;
}
