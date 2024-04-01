#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(9);
    pq.push(3);
    pq.push(8);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}