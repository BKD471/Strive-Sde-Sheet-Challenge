#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        
        int m=horizontalCuts.size(), n=verticalCuts.size();
        int maxVerticalGap=max(horizontalCuts[0],h-horizontalCuts[m-1]);
        
        
        for(int i=0;i<m-1;i++){
            
            int diff=horizontalCuts[i+1]-horizontalCuts[i];
            if(diff>maxVerticalGap) maxVerticalGap=diff;
        }
        
        
        int maxHorizontalGap=max(verticalCuts[0],w-verticalCuts[n-1]);
        for(int i=0;i<n-1;i++){
            
            int diff=verticalCuts[i+1]-verticalCuts[i];
            if(diff>maxHorizontalGap) maxHorizontalGap=diff;
        }
        
        
        return ((long)maxVerticalGap*maxHorizontalGap)%1000000007;
    }
};