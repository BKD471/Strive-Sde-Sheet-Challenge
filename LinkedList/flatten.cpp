#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int data;
	Node* next;
	Node* child;

	Node(int data) {
		this->data = data;
		this->next = NULL;
		this->child = NULL;
	}
};




Node* merge(Node* a,Node* b){
    
    
    if(!a) return b;
    if(!b) return a;
    
    if(a->data<=b->data){
        a->child=merge(a->child,b);
         a->next=nullptr;
        return a;
    }else{
        
        b->child=merge(a,b->child);
        b->next=nullptr;
        return b;
    }
    
    
}    

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
    
    if(head==nullptr || head->next==nullptr) return head;
    
    head->next=flattenLinkedList(head->next);
    
    head=merge(head,head->next);
    return head;
}
