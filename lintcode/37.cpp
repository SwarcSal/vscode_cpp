// 反转一个只有3位数的整数。
class Solution {
public:
    /**
     * @param number: A 3-digit number.
     * @return: Reversed number.
     */
    int reverseInteger(int number) {
        // write your code here
        int n1 = number%10;                     
        int n2 = (number%100 - n1)/10;        
        int n3 = number/100;
        return 100*n1+10*n2+n3;
    }
};