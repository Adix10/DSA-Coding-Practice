/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null)    return null;
        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode prev = dummy;
        ListNode cur = dummy;
        for(int i = n; i > 0; i--){
            cur = cur.next;
        } 

        while(cur.next !=null){
            prev = prev.next;
            cur = cur.next;
        }

        prev.next = prev.next.next;
        return dummy.next;
    }
}