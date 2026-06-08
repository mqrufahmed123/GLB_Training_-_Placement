#include <bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int data;
        ListNode* next;

        ListNode(int val){
            data = val;
            next = NULL;
        }
};

ListNode* insertAtEnd(ListNode* head, int val){
    // ListNode *dummy = new ListNode(-1);
    // dummy->next = head;
    ListNode *newNode = new ListNode(val);

    if(head == NULL){
        return newNode;
    }
    ListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

ListNode* segregate_odd_even(ListNode* head){
    ListNode* temp = head;
    ListNode* odd_head = NULL;
    ListNode* even_head = NULL;

    while(temp){
        // odd
        if((temp->data)%2 == 0){
            even_head = insertAtEnd(even_head, temp->data);
        }else{
            odd_head = insertAtEnd(odd_head, temp->data);
        }
        temp = temp->next;
    }
    head = even_head;
    temp = head;
    while(temp->next){
        temp=temp->next;
    }

    temp->next = odd_head;
    return even_head;
}


ListNode* reverseLL(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }   
    return prev;
}

void display(ListNode* head){
    ListNode* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    ListNode* head = NULL;
    
    int val;
    
    int n;
    cout<<"Enter total no of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout<<"ENter node val: ";
        cin >> val;
        int temp = val;
        int sum = 0;
        while(temp!=0){
            int digit = temp%10;
            sum += digit;
            temp = temp/10;
        }
        if(sum%2 == 0){
            head = insertAtEnd(head, val);
        }
    }

    // head = segregate_odd_even(head);
    // display(head);
    // head = reverseLL(head);
    display(head);

}