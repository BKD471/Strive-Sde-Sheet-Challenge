#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    
    Node* dfs(Node* head){
        
        
        Node* pre=nullptr;
        Node* curr=head;
        while(curr){
            
            pre=curr;
            if(curr->child){
                
                Node* tail=dfs(curr->child);
                tail->next=curr->next;
                if(curr->next) curr->next->prev=tail;
                
                
                curr->next=curr->child;
                curr->child->prev=curr;
                curr->child=nullptr;
                
                pre=tail;
                curr=tail->next;
                
            }else{
                curr=curr->next;
            }
        
            
        }
        
        
        return pre;
        
    }
    
    Node* flatten(Node* head) {
        
        dfs(head);
        return head;
        
    }
};