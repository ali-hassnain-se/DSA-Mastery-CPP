set<int> setInsert(int arr[], int n) {
    // code here
    set<int> s;
    
    for(int i=0;i<n;i++) {
        s.insert(arr[i]);
    }
    
    return s;
}

void setDisplay(set<int>& s) {
    
    // code here
    
    for(auto it=s.begin();it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;
}

    
void setErase(set<int>& s, int x) {
    // code here
    
        if(s.find(x)!=s.end()) {
            s.erase(x);
            cout<<"erased "<<x<<endl;
        }
        
        else {
            cout<<"not found"<<endl;
        }
}