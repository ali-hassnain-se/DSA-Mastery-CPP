#include<iostream>
using namespace std;

int GCD(int a, int b) {
	if(b==0) {
		return a;
	}
	return GCD(b, a%b);
}

int main()
{
	cout<<"Greatest Common Diviser Is: "<<GCD(18, 48)<<endl;
	
	return 0;
}