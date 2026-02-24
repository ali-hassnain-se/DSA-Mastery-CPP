#include<iostream>
using namespace std;

int cQueue[5], n=5, rear=-1, front=-1;

void insert() {
	if((rear+1)%n==front) {
		cout<<"Queue Is Full"<<endl;
	}
	else {
		if(front==-1) {
			front=0;
		}
		int x;
		cout<<"Enter Element To Insert: ";
		cin>>x;
		rear=(rear+1)%n;
		cQueue[rear]=x;
	}
}

void deQueue() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
		if(front==rear) {
			rear=-1;
			front=-1;
		}
		
		cout<<"Deleted Element Is: "<<cQueue[front]<<endl;
		front=(front+1)%n;
	}
}

void display() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
		cout<<"Elements Of Circular Queue Are: ";
		for(int i=front;i<=rear;i++) {
			cout<<cQueue[i]<<" ";
		}
		cout<<endl;
	}
}

void peek() {
	if(front==-1) {
		cout<<"Queue Is Empty"<<endl;
	}
	else {
		cout<<"Peek Element Is: "<<cQueue[front]<<endl;
	}
}

int main()
{
	int choice;
	
	do {
		cout<<"--- CIRCULAR QUEUE MENU ---"<<endl;
	    cout<<"1. Insert Element"<<endl;
	    cout<<"2. Delete Element"<<endl;
	    cout<<"3. Display All Elements"<<endl;
	    cout<<"4. Peek Element"<<endl;
	    cout<<"0. Exit"<<endl;
	    cout<<"Enter Your Choice: ";
	    cin>>choice;
	    
	    switch(choice) {
	    	case 1:
	    		insert();
	    		break;
	    		
	    		case 2:
	    			deQueue();
	    			break;
	    			
	    			case 3:
	    				display();
	    				break;
	    				
	    				case 4:
	    					peek();
	    					break;
	    					
	    					case 0:
	    						cout<<"Exiting... Bye"<<endl;
	    						break;
	    						
	    					default:
	    						cout<<"Invalid Choice! Try Again"<<endl;
		}
	}
	while(choice!=0);
	
	return 0;
}