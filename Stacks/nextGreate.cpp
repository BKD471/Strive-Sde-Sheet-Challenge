#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here

     vector<int> res(n,-1);
    stack<int> st;
    
    for(int i=n-1;i>=0;i--){
        
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        
        if( !st.empty()) res[i]=st.top();
        st.push(arr[i]);
        
    }
    
   
   
    return res;
}