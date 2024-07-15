//Print numbers from 1 to n without the help of loops. You only need to 
//complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.


#include<iostream>
using namespace std;

// void printNos(int i,int n) {
//     // Write your code here.
//     if(i>n)
//     return;
//     cout<<i<<" ";
//     i++;
//     printNos(i,n);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	printNos(1,n);
// }

//second approach
//using backtracking


// void printNos(int i,int n) {
//     // Write your code here.
//     if(i==0)
//     return;
//     i--;
//     printNos(i,n);
//     cout<<i<<" ";
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	printNos(n,n);
// }

void printNos(int n){
    if(n==0)
    return;
    n--;
    // cout<<n<<endl;
    printNos(n);
    cout<<n+1<<" ";
}

int main(){
	int n;
	cin>>n;
	printNos(n);
}