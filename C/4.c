// Remove Nth Node From End of List

// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]

// Example 2:
// Input: head = [1], n = 1
// Output: []

// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]
 


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
 {
     if (head == NULL || n == 0) {
        return head;
    }

    struct ListNode* fast = head;
    struct ListNode* slow = head;

    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            return head; 
        }
        fast = fast->next;
    }

    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    if (slow == head) {
        return head->next; 
    } else {
        slow->next = slow->next->next; 
    }

    return head;
}