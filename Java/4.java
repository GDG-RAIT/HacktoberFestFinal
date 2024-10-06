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
 


// Definition for singly-linked list.
public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}


class sol {

    public static ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode s = new ListNode();
        s.next = head;
        ListNode s1 = s;
        ListNode s2 = s;
    

        for(int i = 0; i < n ; i++)
        {
            s1 = s1.next;
        }
    
        for(int i = 0; s1.next != null; i++)
        {
            s1 = s1.next;
            s2 = s2.next;
        }
        s = null;
        s2.next.next = null;
        return head;
    }
}

