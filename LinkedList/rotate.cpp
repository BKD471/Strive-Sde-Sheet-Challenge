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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head) return nullptr;
        ListNode* curr=head;
        ListNode* prev=curr;
        
        int cnt=0;
        while(curr){
            cnt++;
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=head;
        
        
        int rotateBy=k%cnt;
        
        
        int end=cnt-rotateBy;
        curr=head;
        
        while(end){
            prev=curr;
            curr=curr->next;
            end--;
        }
        
        head=curr;
        prev->next=nullptr;
        
        return head;
     
    }
};