/*

Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *

*/

#include<iostream>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int space=2*n-2;
    for (int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        //star
        for (int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        //space
        for (int j=1;j<=space;j++){
            cout<<" ";
        }
        //star
        for (int j=1;j<=star;j++){
            cout<<"*"<<" ";
        }
        if(i<n) space+=2;
        else space-=2;
        cout<<endl;
    }
}

int main(){
	int n;
	cin>>n;
	symmetry(n);
} 