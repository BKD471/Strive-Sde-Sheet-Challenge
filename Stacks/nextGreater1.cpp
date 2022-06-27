#include<bits/stdc++.h>
using namespace std;


//Here duplicates present
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        
         vector<int> res(nums.size(),-1);
    stack<int> st;
    
        
     int n=nums.size();   
    for(int i=2*n-1;i>=0;i--){
        
        while(!st.empty() && st.top()<=nums[i%n]){
            st.pop();
        }
        
        if(i<n && !st.empty()) res[i]=st.top();
        st.push(nums[i%n]);
        
    }
    
   
   
    return res;
        
        
    }
};