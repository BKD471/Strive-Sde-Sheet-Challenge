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