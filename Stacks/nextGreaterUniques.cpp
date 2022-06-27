#include<bits/stdc++.h>
using namespace std;



// Here only unique values present
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        int n=nums2.size();
        int m=nums1.size();
        
        unordered_map<int,int> mp;
        stack<int> st;
        
        for(int i=0;i<n;i++){
            
            
            while(!st.empty() && st.top()<nums2[i]) {
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        
        
        vector<int> res;
        
        
        for(int i=0;i<m;i++){
            if(mp.find(nums1[i])!=mp.end()){
                res.push_back(mp[nums1[i]]);
            }else{
                res.push_back(-1);
            }
        }
        return res;
    }
};