#include<iostream>
using namespace std;

void fun(int n) {
	if(n==0) {
		cout<<"Happy Birthday!"<<endl;
		return;
	}
	cout<<n<<" Days Left For Birthday"<<endl;
	fun(n-1);
}

int main()
{
	fun(3);
	
	return 0;
}
