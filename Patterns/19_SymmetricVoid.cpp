/*

Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 

*/

#include<iostream>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    int temp=0;
    //first half
    for (int i=0;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int j=0;j<temp;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        temp+=2;
        cout<<endl;
    }
    //second half
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int j=0;j<2*n-(2*(i+1));j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
	int n;
	cin>>n;
	symmetry(n);
} 