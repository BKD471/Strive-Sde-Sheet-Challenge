#include<bits/stdc++.h>
using namespace std;





struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        ListNode* loop=nullptr;
        while(fast && fast->next){
            
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                loop=slow;
                break;
            }
            
        }
        
        if(!loop) return nullptr;
        
        slow=head;
        
        while(slow && fast){
            
            if(slow==fast) return fast;
            slow=slow->next;
            fast=fast->next;
            
        }
        
       return loop;
    }
};