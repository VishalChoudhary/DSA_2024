#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(2);
    st.insert(4);
    st.insert(3);
    st.insert(9);

    // for(auto it=st.begin(); it!=st.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;

    auto pos=st.find(3);
    
    for(auto it=pos; it!=st.end();it++){
        cout<<*(it)<<" ";
    }
}