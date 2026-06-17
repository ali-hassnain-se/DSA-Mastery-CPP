/*you are required to complete this method*/
class Solution {
  public:
    int convertFive(int n) {
        // Your code here
        int ans=0, place=1;
        
        if(n==0)
        return 5;
        
        while(n>0) {
            int lastdig=n%10;
            
            if(lastdig==0) {
                lastdig=5;
            }
            
            ans=ans+(lastdig*place);
            place*=10;
            
            n/=10;
        }
        
        return ans;
    }
};