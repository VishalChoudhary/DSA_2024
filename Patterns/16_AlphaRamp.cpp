/*

Problem statement
Sam is curious about Alpha-Ramp, so he decided to create Alpha-Ramp of different sizes.

An Alpha-Ramp is represented by a triangle, where alphabets are filled from the top in order.

For every value of ‘N’, help sam to return the corresponding Alpha-Ramp.

Example:
Input: ‘N’ = 3

Output: 
A
B B
C C C

*/

#include<iostream>
using namespace std;

void alphaRamp(int n) {
    // Write your code here.
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for (int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
	int n;
	cin>>n;
	alphaRamp(n);
} 