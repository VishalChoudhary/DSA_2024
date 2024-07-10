//Print GFG n times

#include<iostream>
using namespace std;

void printNTimes(int i,int n) {
    // Write your code here.
    if(i>n)
    return;
    cout<<"GFG"<<" ";
    i++;
    printNTimes(i,n);
}

int main(){
	int n;
	cin>>n;
	printNTimes(1,n);
}