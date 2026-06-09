#include <iostream>
using namespace std;
/*
    technique use is fast and slow pointer
    a slow pointer is pinted to the start node
    a fast pointer is one ahead 
    so when the first pointer finally reaches the last node 
    the slow pointer is exactly in the middle
*/ 
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Reverse linked list
ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// Check palindrome
bool isPalindrome(ListNode* head) {
    if (!head || !head->next){
        return true;
    }
    
    ListNode* slow = head;
    ListNode* fast = head;

    // Find middle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse second half
    ListNode* secondHalf = reverse(slow);
    ListNode* firstHalf = head;

    // Compare
    while (secondHalf) {
        if (firstHalf->val != secondHalf->val)
            return false;

        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }

    return true;
}