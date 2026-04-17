#include<iostream>
using namespace std;

int main() {
     int arr[]={2, 4, 4, 4, 4, 5};

     int n = sizeof(arr)/sizeof(arr[0]);

     int st=0, end=n-1, mid, first=-1, last=-1, x=4;

     while(st<=end) {
            mid = st + (end-st)/2;
    
            if(arr[mid] == x) {
                first=mid;
                end=mid-1;
            }
            else if(arr[mid] < x) {
                st=mid+1;
            }
            else {
                end=mid-1;
            }
        }

            st=0, end=n-1;

            while(st<=end) {
            mid = st + (end-st)/2;
    
            if(arr[mid] == x) {
                last=mid;
                st=mid+1;
            }
            else if(arr[mid] < x) {
                st=mid+1;
            }
            else {
                end=mid-1;
            }
     }

    if(first==-1) {
        cout << "Element " << x << " not found in the array." << endl;
    }
    else {
        int total_occurrences = (last - first) + 1;
        cout << "Element " << x << " occurs " << total_occurrences << " times in the array." << endl;
    }
    

    /* Second Method Using Iteration 

    int x = 4;
     int count = 0;

     for(int i=0; i<n; i++) {
         if(arr[i] == x) {
             count++;
         }
     }
        if(count == 0) {
            cout << "Element " << x << " not found in the array." << endl;
        }
        else { 
     cout << "Element " << x << " occurs " << count << " times in the array." << endl;
    }
*/


    return 0;
}