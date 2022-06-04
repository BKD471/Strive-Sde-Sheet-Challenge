#include<bits/stdc++.h>
using namespace std;


class Solution {
    
 public:  
 void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}



int partition(vector<int>& arr,int l,int h){

  int pivot=arr[h];
  int  j=l;
  for(int i=l;i<h;i++){
    if(arr[i]<=pivot){
      swap(&arr[i],&arr[j]);
      j++;
    }
  }

  swap(&arr[h],&arr[j]);
  return j; 
};


int kthLargest(vector<int>& arr,int k,int l,int h,int n){

 if(l<=h){
   int pos=partition(arr,l,h);
    if(k-1==pos) return arr[pos];


    if(k-1>pos) return  kthLargest(arr,k,pos+1,h,n);
   return  kthLargest(arr,k,l,pos-1,n);

 }
   return 0;
}   
    
public:
    int findKthLargest(vector<int>& nums, int k) {
           int n=nums.size();
          return kthLargest(nums,n-k+1,0,n-1,n);
    }
};  