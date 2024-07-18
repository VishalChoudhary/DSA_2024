//Given a number ‘N’, find out the sum of the first N natural numbers.
// Example 1:
// Input: N=5
// Output: 15
// Explanation: 1+2+3+4+5=15

#include<iostream>
using namespace std;

// void printSum(int n,int sum){
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     printSum(n-1,sum+n);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     printSum(n,0);
// }

//functional recursion

int printSum(int n){
    if(n==0)
    return 0;
    return n+printSum(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<printSum(n);
}