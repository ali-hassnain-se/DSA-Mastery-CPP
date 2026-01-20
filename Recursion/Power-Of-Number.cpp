#include<iostream>
using namespace std;

int power(int num, int n) {
	if(n==1) {    // if(n==0) return 1;
	// it will also produce same result result, both conditions are valid.
	
		return num;
	}
	return num*power(num, n-1);
}

int main()
{
	cout<<"Power Of Number Is: "<<power(2, 5)<<endl;
	
	return 0;
}
