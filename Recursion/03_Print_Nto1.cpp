//Print N to 1 using recursion

#include<iostream>
using namespace std;

void printNTimes(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    printNTimes(n-1);
}

int main()
{
    int n;
    cin>>n;
    printNTimes(n);
}