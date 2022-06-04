#include <bits/stdc++.h> 
using namespace std;

long long int merge(long long int arr[],long long int l,long long int mid,long long int h){
    
    long long int m=(mid-l+1);
    long long int n=(h-mid);
    
    long long int invc=0;
    vector<long long int>L(m);
    vector<long long int>R(n);
    
    for(long long int i=0;i<m;i++){
        L[i]=arr[l+i];
    }
    for(long long int i=0;i<n;i++){
        R[i]=arr[mid+i+1];
    }
    
    
    long long int i=0,j=0,k=l;
    while(i<m && j<n){
        
        if(L[i]<=R[j]){
            arr[k++]=L[i++];
        }else{
            arr[k++]=R[j++];
            invc+=(m-i);
        }
    }
    
    while(i<m){
        arr[k++]=L[i++];
    }
    while(j<n){
        arr[k++]=R[j++];
    }
    
    return invc;
}


long long int mergeSort(long long arr[],int l,int h){
    long long int invc=0;
    if(l<h){
        long long int mid=l+(h-l)/2;
        invc+=mergeSort(arr,l,mid);
        invc+=mergeSort(arr,mid+1,h);
        invc+=merge(arr,l,mid,h);
    }
    return invc;
    
}

long long getInversions(long long *arr, int n){
    return mergeSort(arr,0,n-1);
}