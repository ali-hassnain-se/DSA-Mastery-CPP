class Solution {
	public:
	int firstOccurence(string& txt, string& pat) {
		// code here
	// Time Complexity=O(m*n)
	
		int m=txt.size(), n=pat.size();
		
		for (int i = 0; i<m; i++) {
	/*  we can also write outer loop like this:
	    for(int i=0;i<=m-n;i++)
	*/
			for (int j = 0; j<n; j++) {
				if (txt[i+j] != pat[j]) 
					break;
				
				if(j==n-1)
				return i;
			}
		}
		
		return -1;
	}
};
