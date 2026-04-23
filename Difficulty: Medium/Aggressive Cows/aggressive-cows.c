void quickSort(int *arr, int start, int end) {
    if (start >= end) 
    return; // Base case

    int pivot = arr[end];
    int pIndex = start;

    for (int i = start; i < end; i++) {
        
        if (arr[i] <= pivot) {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;

    quickSort(arr, start, pIndex - 1);
    quickSort(arr, pIndex + 1, end);
}


int aggressiveCows(int *stalls, int n, int k) {
    // code here
    quickSort(stalls, 0, n - 1);
     
    int st=1, end, mid, ans=-1;
     
    end=stalls[n-1]-stalls[0];
    
    
    while(st<=end) {
        mid=st+(end-st)/2;
        
        int count=1, pos=stalls[0];
        
        for(int i=1;i<n;i++) {
            if(stalls[i]-pos>=mid) {
                count++;
                pos=stalls[i];
            }
        }
        
        if(count<k) 
            end=mid-1;
        
        else {
            ans=mid;
            st=mid+1;
        }
    }
    
    return ans;
}