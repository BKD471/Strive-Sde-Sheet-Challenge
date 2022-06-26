#include<bits/stdc++.h>
using namespace std;



class Node{
    
    public:
    int val;
    int key;
    Node* next;
    Node* prev;
    Node(int val,int key){
        this->val=val;
        this->key=key;
        this->next=nullptr;
        this->prev=nullptr;
    }
    
};




class LRUCache {
public:
    
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    
    
    unordered_map<int,Node*> mp;
    int cap;    
    
    LRUCache(int capacity) {
        cap=capacity;   
        head->next=tail;
        tail->prev=head;
    }
    
    void addNode(Node* node){
        
        Node* after=head->next;
        head->next=node;
        node->prev=head;
        node->next=after;
        after->prev=node;
    }
    
    
    void deleteNode(Node* node){
        
        Node* before=node->prev;
        Node* after=node->next;
        before->next=after;
        after->prev=before;
       
        
    }
    
    int get(int key) {
        
        if(mp.find(key)!=mp.end()){
            Node* v=mp[key];
            int res=v->val;
            mp.erase(key);
            deleteNode(v);
            addNode(v);
            mp[key]=head->next;
            return res;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        
        Node* newNode=new Node(value,key);
        
        if(mp.find(key)!=mp.end()){
            
            Node* v=mp[key];
            
            mp.erase(key);
            deleteNode(v);
            
        }
        
        
        if(mp.size()==cap){
            
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
          
        }
        
          addNode(newNode);
        
        mp[key]=head->next;
    }
};

