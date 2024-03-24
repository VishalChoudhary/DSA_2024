/*

Problem statement
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *

*/

#include<iostream>
using namespace std;

void nStarDiamond(int n) {
    //first star triangle
    for (int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    //second star triangle
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
	int n;
	cin>>n;
	nStarDiamond(n);
}