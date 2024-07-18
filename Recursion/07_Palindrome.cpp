#include<bits/stdc++.h>
using namespace std;

bool palind(int i,string &s){
    if(i>=s.size()/2)
    return true;
    if(s[i] != s[s.size()-i-1])
    return false;
    return palind(i+1,s);
}

int main(){
    string s = "madam";
    cout<<palind(0,s);
    return 0;
}