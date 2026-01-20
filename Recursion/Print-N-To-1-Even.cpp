#include<iostream>
using namespace std;

void printEven(int n) {
	if(n==2)
	{
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	printEven(n-2);
}

int main()
{
	int num=13;
	if(num%2==1) {  // if number is odd, it will became it even
		num--;
	}
	printEven(num);
	
	return 0;
}
