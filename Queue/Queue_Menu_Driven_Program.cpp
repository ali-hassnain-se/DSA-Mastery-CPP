#include<iostream>
using namespace std;

int queue[5], n=5, rear=-1, front=-1;

void enQueue() {
	if(rear==n-1) {
		cout<<"Queue Is Full"<<endl;
	}
	else {
	if(front==-1) {
		front=0;
	}
	int x;
	cout<<"Enter Number To Insert: ";
	cin>>x;
	rear++;
	queue[rear]=x;
	cout<<"Element Added Successfully!"<<endl;
   }
}

void deQueue() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
	cout<<"Deleted Element Is: "<<queue[front]<<endl;
	
	if(front==rear) {
		front=-1;
		rear=-1;
	}
	else {
	front++;
     }
   }
}

void peek() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
	
	cout<<"Peek Element Is: "<<queue[front]<<endl;
   }
}

void display() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
	cout<<"Queue Elements Are: ";
	for(int i=front; i<=rear; i++) {
		cout<<queue[i]<<" ";
	}
	cout<<endl;
    }
}

int main()
{
	int choice;
	do {
		cout<<"--- QUEUE MENU ---"<<endl;
		cout<<"1. Add Element (EnQueue)"<<endl;
		cout<<"2. Delete Element (DeQueue)"<<endl;
		cout<<"3. Peek Element"<<endl;
		cout<<"4. Display All The Elements"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>choice;
		switch(choice) {
			case 1:
				enQueue();
				break;
				case 2:
					deQueue();
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