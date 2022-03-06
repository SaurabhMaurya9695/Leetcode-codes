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
    public ListNode middleNode(ListNode head) {
        int size = 0;
        ListNode temp = new ListNode();
        temp = head;
        while(temp != null){
            temp = temp.next;
            size++;
        }
        int n = (int)(Math.ceil(size / 2));
        ListNode curr= head;
        for(int i =0 ;i< n ;i++)
        {
            curr= curr.next;

        }
        return curr;
            
        }
        
    
};