#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(256,0);
        
        int n=s.length(),m=t.length();
        
        if(m!=n) return false;
        
        
        for(int i=0;i<n;i++){
            hash[s[i]]+=1;
        }
        
        for(int i=0;i<m;i++){
            if(hash[t[i]]>0) hash[t[i]]-=1;
            else return false;
        }
        
        return true;
    }
};