#include <bits/stdc++.h>
using namespace std;


 struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


//using recursion
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        
        ListNode* cur1=list1;
        ListNode* cur2=list2;

        
        if(!cur1) return cur2;
        if(!cur2) return cur1;
        
            
            if(cur1->val<=cur2->val){
                
                 cur1->next=mergeTwoLists(cur1->next,cur2);
                 return cur1;
                
            }else{
                
                cur2->next=mergeTwoLists(cur1,cur2->next);
                return cur2;
            }
        
    }
};


//using iterative approach 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        
        ListNode* cur1=list1;
        ListNode* cur2=list2;
        
        ListNode* res=nullptr;
        ListNode* start;
        
        if(!cur1) return cur2;
        if(!cur2) return cur1;
        
        while(cur1 && cur2){
            
            if(cur1->val<=cur2->val){
                
                if(res==nullptr){
                      res=cur1;
                     start=res;
                }else{
                    res->next=cur1;
                    res=res->next;
                }
                cur1=cur1->next;
                
            }else{
                
                if(res==nullptr){
                       res=cur2;
                      start=res;
                }else{
                    res->next=cur2;
                    res=res->next;
                }
                cur2=cur2->next;
            }
            
        }
        
        while(cur1){
            res->next=cur1;
            cur1=cur1->next;
            res=res->next;
        }
        
        while(cur2){
            res->next=cur2;
            cur2=cur2->next;
            res=res->next;
        }
        
        return start;
        
    }
};