class Solution {
public:
    string intToRoman(int num) {
// First Method, Time Complexity=O(1)
        // Array in descending order
        int values[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbols[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string result="";
        for(int i=0;i<13;i++) {
            while(num>=values[i]) {
                result+=symbols[i];
                num-=values[i];
            }
        }

        return result;

/*        
//  Second Method, Time Complexity=O(1)

    string ths[]={"M", "MM", "MMM"};
    string hrs[]={"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[]={"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[]={"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    // num/1000, is used to find digit of thousand
    // (num%1000)/100, is used to find digit of hundred, and so on.

    return ths[num/1000] + hrs[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
*/

    }
};