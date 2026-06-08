
string to_upper(string s) {
    // code
    
    for(int i=0;i<s.size();i++) {
        s[i]=toupper(s[i]);
    }
    
    return s;
}