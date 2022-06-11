#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  
    
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        int unique=0;
        for(int i=1;i<n;i++){
            if(nums[unique]!=nums[i]){
                unique++;
                nums[unique]=nums[i];
            }
        }
        return unique+1;
    }
};