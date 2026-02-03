/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit 
integer range [-231, 231 - 1], then return 0.
LeetCode 7 - Reverse Integer
Difficulty: Medium

Approach: isme hamne sirf reverse an integer wala hi approach use kiya hai isme bas ek point par focus karna hai and that is overflow
          of the r=r*10 as this line or variable overflow during run time on number greater than 32 bit
Time Complexity: O(log n)
Space Complexity: O(1)
Runtime=0ms
Memory=8.64MB
*/
// complete same reverse integer approach with a check on 32bit int range
int reverse(int x){
    int ld=0;
    int r=0;
    while(x!=0){
        ld=x%10;
        /*
        BEFORE doing: r = r * 10 and r=r+ld
        we check whether r * 10 would overflow
        */
        // Positive overflow check
        if (r > INT_MAX / 10 || (r == INT_MAX / 10 && ld > 7))// 2147483647 (ends in 7) the reason why used 7 in the condition
            return 0;

        // Negative overflow check
        if (r < INT_MIN / 10 || (r == INT_MIN / 10 && ld < -8)) //-2147483648  (ends in 8) the reason why used 8 in the condition
            return 0;
        r=r*10;
        r=r+ld;
        x=x/10;
    }
    return r;
}
