#include<bits/stdc++.h>
using namespace std;


struct ListNode {
     int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node->next->next;    
        int val=node->next->val;
        
        node->val=val;
        node->next=temp;
    
    }
};