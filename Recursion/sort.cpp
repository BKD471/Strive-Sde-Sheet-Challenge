#include<bits/stdc++.h>
using namespace std;

void insertInto(vector<int>& nums,int  temp){
  if(nums.size()==0 || nums[nums.size()-1]<=temp){
       nums.push_back(temp);
       return;
  }

 int v=nums[nums.size()-1];
  nums.pop_back();
 insertInto(nums,temp);
 nums.push_back(v);
}


void sortV(vector<int>& nums){

    if(nums.size()==1 ){
        return;
    }

 int v=nums[nums.size()-1];  
 nums.pop_back();
sortV(nums);

  insertInto(nums,v);




}

int main(){

 vector<int> v={9,5,1,3,6,2,7};
 sortV(v);
 int n=v.size();
for(int i=0;i<n;i++){
  cout<<v[i]<<endl;
}
}

