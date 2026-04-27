#include<iostream>
#include<vector>

using namespace std;

bool divide(vector<int> &arr) {

// First Method, Time Complexity=O(N^2)

    int n=arr.size();

    for(int i=0;i<n-1;i++) {

        int sum1=0, sum2=0;

        for(int j=0;j<=i;j++)
        sum1+=arr[j];

        for(int j=i+1;j<n;j++)
        sum2+=arr[j];

        if(sum1==sum2)
        return 1;
    }

    return 0;


    /* Second Method, Time Complexity=O(N)

    int prefix=0, n=arr.size(), total_sum=0;

    // Total Sum
    for(int i=0;i<n;i++) 
        total_sum+=arr[i];

        for(int i=0;i<n-1;i++) {
            prefix+=arr[i];

            int ans=total_sum-prefix;

            if(prefix==ans)  // we can also write this: 
                              //if(total_sum==2*prefix)
                              
            return 1;
        }

        return 0;
*/       
}


int main()
{
    int n;
    cout<<"Enter Size Of Array: ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter Elements Of Array: ";
    for(int i=0;i<n;i++) 
    cin>>v[i];

    cout<<divide(v)<<endl;

    return 0;
}