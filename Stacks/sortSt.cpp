#include <bits/stdc++.h>
using namespace std;


void Insertit(stack<int>& st,int v){
    
    if(st.size()==0 || st.top()<=v){
        st.push(v);
        return;
    }    
    
    int t=st.top();
    st.pop();
    Insertit(st,v);
    st.push(t);
}


void sortIt(stack<int> &st){
    if(st.size()==0) return;
    
    int v=st.top();
    st.pop();
    sortIt(st);
    Insertit(st,v);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
    
    
    sortIt(stack);
}