// Stack class.

#include<bits/stdc++.h>
using namespace std;

class Stack {
    
public:
    
    int cap;
    int topIndex;
    int* res;
    Stack(int capacity) {
        this->cap=capacity;
        this->topIndex=-1;
        res=new int[capacity];
        // Write your code here.
        
    }

    void push(int num) {
        if(topIndex<cap){
            res[++topIndex]=num;
        }

    }

    int pop() {
        // Write your code here.
        if(topIndex<0) return -1;
        int top=res[topIndex];
        topIndex--;
        return top;
    }
    
    int top() {
        // Write your code here.
        
        if(topIndex<0) return -1;
        return res[topIndex];
    }
    
    int isEmpty() {
        // Write your code here.
        return topIndex<0? 1:0;
    }
    
    int isFull() {
        // Write your code here.
        return topIndex>=cap-1? 1: 0;
    }
    
};