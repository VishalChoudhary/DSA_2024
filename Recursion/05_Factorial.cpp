#include<iostream>
using namespace std;

// void printFac(int n,int fac){
//     if(n<1)
//     {
//         cout<<fac;
//         return;
//     }
//     printFac(n-1,fac*n);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     printFac(n,1);
// }

int printFac(int n){
    if(n==0)
    return 1;
    return n*printFac(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<printFac(n);
}