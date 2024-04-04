/*

Problem statement
Check whether a given number ’n’ is a palindrome number.

Note :
Palindrome numbers are the numbers that don't change when reversed.
You don’t need to print anything. Just implement the given function.
Example:
Input: 'n' = 51415
Output: true
Explanation: On reversing, 51415 gives 51415.

*/

bool palindrome(int n)
{
    // Write your code here
        int revNum=0;
        int dup=n;
        while(n>0){
            int ld=n%10;
            revNum=(revNum*10)+ld;
            n=n/10;
        }
        if(revNum==dup)
        return true;
        else
        return false;
}