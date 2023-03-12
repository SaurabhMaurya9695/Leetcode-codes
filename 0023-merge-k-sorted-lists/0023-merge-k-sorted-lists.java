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
    
    ListNode mergelist(ListNode head1, ListNode head2) {
        if(head1 == null) return head2;
        if(head2 == null) return head1;
        ListNode dummy = new ListNode(-1);
        ListNode head = dummy  , tail = dummy;
        while(head1 != null && head2 !=  null)
        {
            if(head1.val < head2.val)
            {
                tail.next = head1;
                head1 = head1.next;
            }
            else{
                tail.next = head2;
                head2 = head2.next;
            }
            tail = tail.next;
        }
        if(head1 !=  null)
        {
            tail.next = head1;
        }
        else{
            tail.next = head2;
        }
        return dummy.next ;
   } 
    public ListNode helper(ListNode [] head , int left , int right)
    {
        if(left > right) return null;
        if(left == right) return head[left];
        
        int mid = (left + right) / 2;
        ListNode l1 = helper(head , left , mid);
        ListNode l2 = helper(head , mid + 1 , right);
        return mergelist(l1 , l2);
        
    }
    public ListNode mergeKLists(ListNode[] head) {
        
        if(head.length == 0 )
        {
            return null;
        }
        return  helper( head ,  0 , head.length - 1 );
    }
        
};