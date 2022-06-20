#include<bits/stdc++.h>
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
    ListNode* reverse(ListNode* head){
        
        ListNode* curr=head;
        ListNode* prev=nullptr;
        ListNode* after;
        
        while(curr){
            
            after=curr->next;
            curr->next=prev;
            prev=curr;
            curr=after;
            
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* first=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
       
        ListNode* second=slow->next;
        slow->next=nullptr;
        
        ListNode* reversed=reverse(second);
        
        while(first && reversed){
            if(first->val!=reversed->val) return false;
            
            first=first->next;
            reversed=reversed->next;    
        }
        
        return true;
    }
};