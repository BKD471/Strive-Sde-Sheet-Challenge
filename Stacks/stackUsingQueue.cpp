#include <bits/stdc++.h>

class MyStack {
public:
    
    queue<int> q;
    MyStack() {
    }
    
    void push(int x) {
        
        int s=q.size();
        q.push(x);
        
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        
        int e=q.front();
         q.pop();
        return e;
    }
    
    int top() {
         return q.front();
    }
    
    bool empty() {
        return q.empty() ? true:false;
    }
};