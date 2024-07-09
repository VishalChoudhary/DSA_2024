#include<iostream>
using namespace std;

void printNos(int i,int n) {
    // Write your code here.
    if(i>n)
    return;
    cout<<i<<" ";
    i++;
    printNos(i,n);
}

int main(){
	int n;
	cin>>n;
	printNos(1,n);
}