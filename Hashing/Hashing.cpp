#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,5,1,2,3,8,9,1,9,1,1,4,5,6,5,3,5};
    int n = sizeof(arr) / sizeof(int);
    
    //precompute
    //ordered
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // } 

    //unordered
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    } 

    for(auto it:mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
    
}