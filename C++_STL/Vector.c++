#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i=10;i<=100;i=i+10){
        v.push_back(i);
    }

    cout<<"Elements in the vector: ";
    // for( auto it=v.begin(); it!=v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    cout << "\nThe front element of the vector: " << v.front();
    cout << "\nThe last element of the vector: " << v.back();
    cout << "\nThe size of the vector: " << v.size();

    cout << "\nDeleting element from the end: " << v[v.size() - 1];
    v.pop_back();

    // cout << "\nPrinting the vector after removing the last element:" << endl;
    // for (int i = 0; i < v.size(); i++)
    // cout << v[i] << " ";

    // v.erase(v.begin()+1);
    // v.erase(v.begin()+2,v.begin()+4);

    // v.insert(v.begin(),110);

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

}