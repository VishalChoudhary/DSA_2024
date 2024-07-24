#include<bits/stdc++.h>
using namespace std;

int main(){

    // string s={"abdhefgadhfegbbadbdr"};
    string s={"adhfjahaj"};
    int n = s.size();

    //precompute
    /*int hash[256] = {0};
    for(int i=0;i<n;i++){
        hash[s[i]]++;
    }*/

    // for specifically either small or caps
    int hash[26] = {0};
    for(int i=0;i<n;i++){
        hash[s[i]-'a']++;
    }

    int num;
    cin>>num;
    while(num--){
        char c;
        cin>>c;
        //fetch
        cout<<c<<"    "<<hash[c-'a']<<endl;
    }

    return 0;
}