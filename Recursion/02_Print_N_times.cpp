//Print GFG n times

#include<iostream>
using namespace std;

void printNTimes(int n) {
    // Write your code here.
    if(n<1)
    return;
    cout<<"GFG"<<" ";
    printNTimes(n-1);
}

int main(){
	int n;
	cin>>n;
	printNTimes(n);
}