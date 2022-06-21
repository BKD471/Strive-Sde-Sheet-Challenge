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
  
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        ListNode* strt=head;
        int cnt=0;
        while(strt){
            cnt++;
            strt=strt->next;
        }
        
        
        
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        
        ListNode* pre=dummy;
        
        ListNode* curr;
        ListNode* after;
        while(cnt>=k){
            curr=pre->next;
            after=curr->next;
            
            for(int i=1;i<k;i++){
                
                curr->next=after->next;
                after->next=pre->next;
                pre->next=after;
                after=curr->next;
            }
            
            pre=curr;
            cnt-=k;
        }
      
        return dummy->next;
    }
};