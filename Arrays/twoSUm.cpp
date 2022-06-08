#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hashMap;
        
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int key=target-nums[i];
            if(hashMap.find(key)!=hashMap.end()) return vector<int> {hashMap[key],i};
             hashMap.insert({nums[i],i});
        
        }
        
        return vector<int> {};
    }
};