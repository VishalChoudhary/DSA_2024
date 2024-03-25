/*

Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

Given 'N', print the corresponding pattern.

Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1

*/

#include<iostream>
using namespace std;

void numberCrown(int n) {
    // Write your code here.
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space=space-2;
    }
}

int main(){
	int n;
	cin>>n;
	numberCrown(n);
} 