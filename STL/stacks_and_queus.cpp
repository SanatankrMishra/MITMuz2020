#include <bits/stdc++.h>

using namespace std;

int main(){
// Implementing Stack using STL 
    stack<int> s;
    s.push(1);    
    s.push(2);    
    s.push(3);    
    while(!s.empty()){
        cout<< s.top()<< endl;
        s.pop();
    }

// Implementing Queues using STL

    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    while(!q.empty()){
        cout<<q.front() << endl;
        q.pop();
    }

    return 0;
}
