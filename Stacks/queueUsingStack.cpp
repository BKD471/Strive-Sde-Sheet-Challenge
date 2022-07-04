#include <bits/stdc++.h>

class Queue{
public:
    
    stack<int> ip;
    stack<int> op;
     Queue() {
        
    }
    
    void push(int x) {
        
        ip.push(x);
        
    }
    
    int pop() {
        
        if(op.empty()){
            
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
        }
        
        int poped=op.top();
        op.pop();
        
        return poped;
    }
    
    int peek() {
        
        if(op.empty()){
            
            while(!ip.empty()){
                op.push(ip.top());
                ip.pop();
            }
        }
        
        int tp=op.top();
        return tp;
    }
    
    bool empty() {
        return (op.empty() && ip.empty()) ? true: false;
    }
};