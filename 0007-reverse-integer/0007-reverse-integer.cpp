class Solution {
public:
    int reverse(int x) {
/* Code using 64 bit integer    

        long r=0; 

        while(x) {
         r=r*10+x%10; 
         x=x/10;     
        }
        
        if(r>INT_MAX || r<INT_MIN) return 0; // check range if r is outside the range then return 0  
        return int(r);
    */    

//Code using 32 bit integer

        int r=0, lastdig=0;

        while(x) {
            if(r>INT_MAX/10 || r<INT_MIN/10)  return 0;
            lastdig=x%10;
            r=r*10+lastdig;
            x=x/10;
        }

        return r;
    }
};