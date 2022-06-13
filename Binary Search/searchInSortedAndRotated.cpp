#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int l=0,h=n-1;
        while(l<=h){
            
            int mid=l+(h-l)/2;
            
            if(nums[mid]==target) return mid;
            
            if(nums[l]<=nums[mid]){
                
                if(target<=nums[mid] && nums[l]<=target) h=mid-1;
                else l=mid+1;
            }else{
                
                if(target>=nums[mid+1] && target<=nums[h]) l=mid+1;
                else h=mid-1;
            }
            
        }
        return -1;
    }
};