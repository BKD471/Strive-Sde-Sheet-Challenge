#include <bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        ListNode* cur1=headA;
        ListNode* cur2=headB;
        
      
       while(cur1!=cur2){
           
           cur1=cur1?cur1->next:headB;
           cur2=cur2?cur2->next:headA;
       }
        
       if(cur1==NULL) return nullptr;
 
        
       return cur1;
        
    }
};