/*

Problem statement
You are given a number 'n'.



Return number of digits in ‘n’.



Example:
Input: 'n' = 123

Output: 3

Explanation:
The 3 digits in ‘123’ are 1, 2 and 3. 

*/

#include<iostream>
using namespace std;

int countDigits(int n){
	// Write your code here.	
	int count=0;
	while(n!=0){
		count+=1;
		n=n/10;
	}
	return count;
}

int main(){
	int n;
	cin>>n;
	cout<<countDigits(n);
} 