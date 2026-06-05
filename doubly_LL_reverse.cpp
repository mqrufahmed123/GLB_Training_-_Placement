#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int data;
        ListNode* next;
        ListNode* prev;
    ListNode(int val){
        int data = val;
    }
};

ListNode* reverseLL(ListNode* head){
    ListNode* curr = head;
    while(curr->next != NULL){
        cout<<curr->data;
        curr = curr->next;   
    }

    while(curr->prev != NULL){
        cout<<curr->data;
        curr = curr->prev;
    }
}

int main(){
    
}