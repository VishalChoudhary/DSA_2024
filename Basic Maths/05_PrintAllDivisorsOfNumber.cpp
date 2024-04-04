/*

Problem statement
You are given a natural number ‘N’. Find all the divisors of the number ‘N’. Print them in increasing order.

Example:
Input: ‘N’ = 10 

Output: [1, 2, 5, 10]

1, 2, 5, and 10 are the only divisors of the number 10.

*/

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

// Approach 1
// void printDivisors(int n){
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// Approach 2
void printDivisors(int n){
    vector<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0)
        ls.push_back(i);
        if((n/i)!=i)
        ls.push_back(n/i);
    }
    sort(ls.begin(),ls.end());
    for(auto i:ls){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}