#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        
      int n=s.length();
        string res="";
       
      int l=0;
      while(l<n){
          
          while(l<n && s[l]==' '){
              l++;
          }
          
          if(l>=n) break;
          
          int m=l;
          
          while(m<n && s[m]!=' '){
              m++;
          }
          
          string temp=s.substr(l,m-l);
        
          if(res.length()==0) res=temp;
          else res=temp+" "+res;
          
          l=m+1;
          
      }  
    
    return res;  
    }
};



//  removing the trailing spaces and then  reversing
class Solution {
public:
    string reverseWords(string s) {
        
      int n=s.length();
        
        
       
        int i=0,j=n-1;
        
        
        while(i<n && s[i]==' ') i++;
        
        while(j>=0 && s[j]==' ')  j--;
        
     
 
        s=s.substr(i,j-i+1);  
        
     
       
        
       string res="",temp="";
       int l=0,h=s.length()-1;
        
       int cnt=0;
        while(l<=h){
            
            char ch=s[l];
            if(s[l]!=' '){
                temp+=ch;
                cnt=0;
            }else if(s[l]==' ' && cnt==0){
               
                if(res!=""){
                    res=temp+" "+res;
                }else{
                    res=temp;
                }
                temp="";
                cnt++;
            }
            
            l++;
        }
        

        if(temp!=""){
            if(res!=""){
                res=temp+" "+res;
            }else{
                res=temp;
            }
        }
        
        

       
       return res;
     
    
    }
};