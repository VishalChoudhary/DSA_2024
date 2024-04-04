/*

Problem statement
You are given two integers 'n', and 'm'.



Calculate 'gcd(n,m)', without using library functions.



Note:
The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.


Example:
Input: 'n' = 6, 'm' = 4

Output: 2

Explanation:
Here, gcd(4,6) = 2, because 2 is the largest positive integer that divides both 4 and 6.

*/

#include<bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m){
    // Write your code here.
    while(n>0 && m>0){
        if(n>m) 
            n=n%m;
        else
            m=m%n;
    }
    if(n==0)
    return m;
    else
    return n;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<calcGCD(n,m);
}