#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,1,2,3,8,9,1,9,1,1,4,5,6,5,3,5};
    int n = sizeof(arr) / sizeof(int);
    
    //precompute
    int hash[20] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }   

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<num<<"   "<<hash[num]<<endl;
    }
}