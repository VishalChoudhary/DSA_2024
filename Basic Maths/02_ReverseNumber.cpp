/*

Problem statement
Ninja is feeling very bored and wants to try something new. So, he decides to find the reverse of a given number. But he cannot do it on his own and needs your help.

Note:

If a number has trailing zeros, then its reverse will not include them. For e.g., the reverse of 10400 will be 401 instead of 00401.

*/

#include <bits/stdc++.h> 
using namespace std;


long long int reverseNumber(long long int n)
{
	//type your code here
	long long int rev_num=0;
	while(n!=0){
		long long int last_digit=n%10;
		n=n/10;
		rev_num=(rev_num*10)+last_digit;
	}
	return rev_num;
}

int main(){
	long long int n;
	cin>>n;
	cout<<reverseNumber(n);
} 
