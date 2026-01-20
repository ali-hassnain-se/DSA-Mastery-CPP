#include<iostream>
using namespace std;
int sumOfNatNum(int n) {
	if(n==0) {
		return 0;
	}
	return n+sumOfNatNum(n-1);
}
int main()
{
	int result=sumOfNatNum(5);
	cout<<"Sum Is: "<<result<<endl;
	
	return 0;
}
