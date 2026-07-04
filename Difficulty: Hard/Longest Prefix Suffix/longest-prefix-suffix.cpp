class Solution {
	public:
	int getLPSLength(string &s) {
		// code here
		
// Third Method, Most Optimized Approach, KMP Algorithm, TC=O(N), SC=O(N)

	vector<int> lps(s.size(), 0);
	int pre=0, suf=1;
	
	while(suf<s.size()) {
	    // Match
	    if(s[pre]==s[suf]) {
	        lps[suf]=pre+1;
	        pre++;
	        suf++;
	    }
	    // Not Matched
	    else {
	        if(pre==0) {
	            lps[suf]=0;
	            suf++;
	        }
	        
	        else {
	            pre=lps[pre-1];
	        }
	    }
	}
	
	return lps[s.size()-1];		
		
/*
	First Method, Brute Force Approach, TC = O(N^2), SC = O(N)
		
		int n = s.size();
		
		string prefix(n - 1, ' ');
		string suffix(n - 1, ' ');
		
		for (int i = 0; i<n - 1; i++) {
			prefix[i] = s[i];
			
			suffix[i] = s[i + 1];
		}
		
		int m = n - 1;
		for (int len = m; len >= 1; len--) {
			bool match = true;
			
			for (int i = 0; i<len; i++) {
				if (prefix[i] != suffix[m - len + i]) {
					match = false;
					break;
				}
			}
			
			if (match)
				return len;
		}
		
		return 0;
	*/

		
/*
	Second Method, Optimized Brute Approach, TC = O(n^2), SC = O(1)
		
		int n = s.size();
		
		for (int len = n - 1; len >= 1; len--) {
			bool match = true;
			for (int i = 0; i < len; i++) {
				if (s[i] != s[n - len + i]) {
					match = false;
					break;
				}
			}
			if (match)
				return len;
		}
		
		return 0;
	*/
	
	}
};
