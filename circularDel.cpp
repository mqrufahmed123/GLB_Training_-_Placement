#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode* next;
};

void deleteNode(ListNode* head, int pos){
    if(pos < 1){
        cout<<"Invalid position"<<endl;
        return;
    }
    if(pos == 1){
        ListNode* last = head;
        while(last->next != head){
            last = last->next;
        }

        last->next = head->next;
        head = head->next;
    }else{
        ListNode* temp= head;
        int i = 0;
        while(i < pos-1){
            temp = temp->next;
        }
        temp = temp->next;
    }
}

int main(){

    
    return 0;
}