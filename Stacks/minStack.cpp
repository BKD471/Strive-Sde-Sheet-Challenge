#include <bits/stdc++.h>
using namespace std;



class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
        stack<int> st;
        int mn;
		minStack() 
		{ 
			// Write your code here.
           // while (st.empty() == false) st.pop();
            mn=INT_MAX;
           
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            
            if(st.empty()){
                st.push(num);
                mn=num;
                return;
            }
            
            if(num<mn){
                int v=(2*num)-mn;
                st.push(v);
                mn=num;
            }else{
            st.push(num);
            }
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(st.empty()) return -1;
            int poped=st.top();
            if(st.top()<mn){
                poped=mn;
                mn=(2*mn-st.top());
                
            }
            st.pop();
            return poped;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            if(st.empty()) return -1;
            int tp=st.top();
            if(st.top()<mn){
                tp=mn;
            }
            
            return tp;
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            if(st.empty()) return -1;
            return mn;
		}
};