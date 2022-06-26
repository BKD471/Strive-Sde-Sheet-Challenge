#include <bits/stdc++.h>
using namespace std;




 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    
    ListNode* merge(ListNode* a,ListNode* b){
        
        
        if(!a) return b;
        if(!b) return a;
        
        if(a->val<=b->val){
            a->next=merge(a->next,b);
            return a;
        }else{
            b->next=merge(a,b->next);
            return b;
        }
        
        
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n=lists.size();
        
        if(!n) return nullptr;
        
        ListNode* res=lists[0];
        for(int i=1;i<n;i++){
            
            res=merge(res,lists[i]);
            
        }
        
        return res;
        
    }
};