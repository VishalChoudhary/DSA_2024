//Print N to 1 using recursion

#include<iostream>
using namespace std;

void printNTimes(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    n--;
    printNTimes(n);
}

int main()
{
    int n;
    cin>>n;
    printNTimes(n);
}