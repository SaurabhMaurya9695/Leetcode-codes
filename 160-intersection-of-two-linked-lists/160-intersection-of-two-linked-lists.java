public class Solution {
    public static int findsize(ListNode head)
    {
        int size =0;
        while(head != null)
        {
            size++;
            head = head.next;
        }
        return size ;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        int size1 = findsize(headA);
        int size2 = findsize(headB);
        int diff = size2 - size1;
        // check for max ;
        if(size2 > size1)
        {
           
            for(int i = 0; i<size2 - size1 ;i++)
            {
                headB = headB.next ;
            }
            
        }
        else{
            for(int i = 0; i< size1 - size2 ;i++)
            {
                headA = headA.next;
            }
        }
        while(headA != headB)
        {
            headA = headA.next;
            headB = headB.next;
        }
        return headA;    
        
    }
}