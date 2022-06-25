#include <bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


//best appraoch
class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head) return nullptr;
        
        Node* curr=head;
        Node* after;
        while(curr){
            
            Node* temp=new Node(curr->val);
            after=curr->next;
            curr->next=temp;
            temp->next=after;
            curr=after;
        }
        
        
        curr=head;
        
        while(curr){
            after=curr->next;
             curr->random? after->random=curr->random->next: after->random=nullptr;
            curr=after->next;
        }
        
        
        curr=head;
        Node* res=curr->next;
            
        while(curr){
            after=curr->next;
            curr->next=after->next;
            curr=curr->next;
            if(curr) after->next=curr->next;
        }    
            
        
        return res;
    }
};



//using hashmap 

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        unordered_map<Node* ,Node*> hash;
        
        Node* curr=head;
        Node* orig=nullptr;
        Node* res=orig;
        
        while(curr){
            
            orig=new Node(curr->val);
            hash[curr]=orig;
            curr=curr->next;
            
            
        }
        
        
        curr=head;
        while(curr){
            
            orig=hash[curr];
             orig->next=hash[curr->next];
            orig->random=hash[curr->random];
            curr=curr->next;
        }
        
        return  hash[head];
      
    }
};