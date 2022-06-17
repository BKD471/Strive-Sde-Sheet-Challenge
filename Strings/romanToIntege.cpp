#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        
        int n=s.length();
        unordered_map<char,int> mp;
        
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        mp['I']=1;
        
        
       int ans=0; 
        int l=0;
        while(l<n-1){
            
            
            if(mp[s[l]]>mp[s[l+1]]){
               ans+=mp[s[l]];
               
                l+=1;           
           }else if(mp[s[l]]==mp[s[l+1]])
           {
               ans+=2*mp[s[l]];
                l+=2;
           }
         else{
               
               int res=mp[s[l+1]]-mp[s[l]];
               ans+=res;
               l+=2;
           }
            
          
        }
        if(l<=n-1){
            ans+=mp[s[l]];
        }
        
        
        
        
    
        return ans;
    }
};