
#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void maxHeapify(vector<int> &arr,int  root,int n){

 int largest=root;
int l=(2*root+1);
int r=(2*root+2);
if(l<n && arr[l]>arr[root]) largest=l;
if(r<n && arr[r]>arr[largest]) largest=r;
if(root!=largest){
  swap(&arr[root],&arr[largest]);
  maxHeapify(arr,largest,n);
}
}


void   buildHeap(vector<int>& arr,int n){
 
  for(int i=n/2-1;i>=0;i--){
     maxHeapify(arr,i,n);
  }

}

int kthLargest(vector<int>& arr, int size, int K)
{
	buildHeap(arr,size);
  
    int maxe;
    while(K--){
       maxe=arr[0];
       swap(&arr[0],&arr[size-1]);
       size-=1;
       maxHeapify(arr,0,size);
    }
   return maxe;
}
