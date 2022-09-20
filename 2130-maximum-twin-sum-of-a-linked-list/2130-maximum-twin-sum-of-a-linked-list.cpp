
class Solution {
public:
    #define ll long long
    ListNode* reverseList(ListNode* head) 
    {

        ListNode * prev = NULL;
        ListNode * curr = head;
        while(curr != NULL)
        {
            ListNode * nextsavingNode  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextsavingNode;         
        }

        return prev;
        
    }
    
    int pairSum(ListNode* head) 
    {
        ListNode * c5 =  NULL;
        ListNode * c3 = NULL;
        ListNode * c2 = head;
        while(c2 != NULL)
        {
            ListNode * c4 = new ListNode(c2->val);
            if(c3 == NULL) 
            {
                c5 = c4;
                c3 = c4;
            }
            else{
                
                c3->next = c4;
                c3 = c3 -> next;
            }
           
            c2 = c2->next;
        }
        // while(c3 != NULL)
        // {
        //     cout << "c3 value : +" << c3-> val << endl;
        //     c3 = c3 -> next;
        // }
        ListNode * c1 = reverseList(c5);
        // c2 = head;
        
        ll sum  = 0;
        ll ans = 0;
        while(c1 != NULL ||  head != NULL )
        {
            // cout<< c2->val << " " << endl;
            if(c1 == NULL) cout<<"c1"  ;
            if(head == NULL) cout<<"head"  ;
            ll sum = c1->val + head -> val;
            // cout<< "sum is : +" << sum << endl;
            ans = max(ans , sum);
            c1 = c1->next;
            head = head->next;
        }
        return ans;
    }
};