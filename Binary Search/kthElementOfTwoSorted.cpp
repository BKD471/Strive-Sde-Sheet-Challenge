#include<bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &nums1, vector<int> &nums2, int m, int n, int k) {
    // Write your code here.
    
 if(m>n){
        return ninjaAndLadoos(nums2,nums1,n,m,k);
    }
    
    
    int l=max(0,k-n), h=min(k,m);
    
    while(l<=h){
        
        int mid=l+(h-l)/2;
        
        int cut1=mid;
        int cut2=k-cut1;
        
        
        int l1=cut1==0? INT_MIN:nums1[cut1-1];
        int l2=cut2==0?INT_MIN:nums2[cut2-1];
        int r1=cut1==m?INT_MAX:nums1[cut1];
        int r2=cut2==n?INT_MAX:nums2[cut2];
        
        
        if(l1<=r2 && l2<=r1) return max(l1,l2);
        
        if(l1>r2) h=cut1-1;
        else l=cut1+1;
    }   

    return 0;
    
}