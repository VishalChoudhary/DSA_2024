#include<bits/stdc++.h>
using namespace std;
 
int printFibonacci(int n){
    if(n<=1)
    return n;
    return printFibonacci(n-1)+printFibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<printFibonacci(n);
}