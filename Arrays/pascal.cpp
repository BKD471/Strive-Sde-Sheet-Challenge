#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> res;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            
        for(int j=0;j<=i;j++){
            if(j==0 || i==j) temp.push_back(1);
            else{
                int c=res[i-1][j-1]+res[i-1][j];
                temp.push_back(c);
            }
        }
            res.push_back(temp);
        }
        return res;
    }
};