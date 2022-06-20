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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        
        ListNode* res=new ListNode();
        ListNode* start=res;
        int rem=0;
        
        
        while(curr1 && curr2){
            
            int add=curr1->val+curr2->val+rem;
            if(add>=10){
                rem=add/10;
                 int v=add%10;  
                ListNode* temp=new ListNode(v);
                res->next=temp;
                res=res->next;
            }else{
                
                ListNode* temp=new ListNode(add);
                res->next=temp;
                res=res->next;
                rem=0;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        
       
        
        while(curr1){
            
            int data=curr1->val+rem;
            if(data>=10){
                int v=data%10;
                rem=data/10;
                ListNode* temp=new ListNode(v);
                res->next=temp;
                res=res->next;
            }else{
                
                 ListNode* temp=new ListNode(data);
                res->next=temp;
                res=res->next;
                rem=0;
            }
            
            curr1=curr1->next;
        }
        
        while(curr2){
            
            int data=curr2->val+rem;
            if(data>=10){
                int v=data%10;
                rem=data/10;
                ListNode* temp=new ListNode(v);
                res->next=temp;
                res=res->next;
            }else{
                
                 ListNode* temp=new ListNode(data);
                res->next=temp;
                res=res->next;
                rem=0;
            }
            
            curr2=curr2->next;
        }
        
         if(rem && !curr1 && !curr2){
             ListNode* temp=new ListNode(rem);
             res->next=temp;
            res=res->next;
        }
    
       
        
     
       // ListNode* head=reverse(start->next);
        return start->next;
        
    }
};