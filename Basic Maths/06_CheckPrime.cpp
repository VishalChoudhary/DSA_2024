/*

Problem statement
A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.



You are given a number 'n'.



Find out whether 'n' is prime or not.



Example :
Input: 'n' = 5

Output: YES

Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

*/


bool isPrime(int n)
{
	// Write your code here.
	int count=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			count++;
			if(n/i!=i){
				count++;
			}
		}
	}
	if(count==2)
	return true;
	else
	return false;
}
