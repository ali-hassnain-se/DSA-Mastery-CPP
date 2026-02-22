#include<iostream>
using namespace std;

int stack[5], n=5, top=-1;

void push(int x) {
	if(top==n-1) {
		cout<<"Stack Is Full!"<<endl; 
	}
	else {
		top++;
		stack[top]=x;
		cout<<"Element Added Successfully!"<<endl;
	}
}

void pop() {
	if(top==-1) {
		cout<<"Stack Is Empty!"<<endl;
	}
	else {
		cout<<"Deleted Element Is: "<<stack[top]<<endl;
		top--;
	}
}

void peek() {
	if(top==-1) {
		cout<<"Stack Is Empty!"<<endl;
	}
	else {
		cout<<"Peek Element Is: "<<stack[top]<<endl;
	}
}

void display() {
	if(top==-1) {
		cout<<"Stack Is Empty!"<<endl;
	}
	else {
		cout<<"Stack Elements Are: ";
		for(int i=top;i>=0;i--) {
			cout<<stack[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int choice, num;
	do {
		cout<<"--- STACK ---"<<endl;
		cout<<"1. Add Element"<<endl;
		cout<<"2. Delete Element"<<endl;
		cout<<"3. Peek Element"<<endl;
		cout<<"4. Display All The Elements"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		switch(choice) {
			case 1:
				cout<<"Enter Number To Add: ";
				cin>>num;
				push(num);
				break;
				case 2:
					pop();
					break;
					case 3:
						peek();
						break;
						case 4:
							display();
							break;
							case 0:
								cout<<"Exiting... Bye!"<<endl;
								break;
								
							default:
								cout<<"Invalid Choice! Try Again"<<endl;
		}
	}
	while(choice!=0);
	
	return 0;
}