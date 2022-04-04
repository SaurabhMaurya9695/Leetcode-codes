/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         // method 1 using extra space ;
//         vector<int> nums;
        
//         //step-1: Convert LL to array
//         while(head != NULL){  //nums: 1 2 3 4 5
//             nums.push_back(head->val);
//             // cout<<head->val<<endl;
//             head = head->next;
//         }
        
//         //step-2: now find those two elements and swap
//         int n = nums.size();
//         cout<<nums[k-1] <<"\t" <<nums[n-k]<<endl;
//         swap(nums[k-1], nums[n-k]);
        
      
//         //step-3: convert back array to LL
//         ListNode* cur = new ListNode(NULL);
//         head = cur;
//         for(int i=0; i<n; i++){
//             cur->next = new ListNode(nums[i]);
//             cur = cur->next;
//         }    
        
//         return head->next;
//     }
     ListNode* swapNodes(ListNode* head, int k) 
     {
       // method 2 ;
       // find the kth pos and find n -k + 1 pos .. you just have to swap the values ;
        ListNode *first, *last , *temp;
        int i=0;
        last=head;
        while(last)
        { 
            ++i; 
            if(i==k)  
                first=last; 
            last=last->next;
        }
        last=head;
        k = i-k+1;
         int j = 0 ;
        while(last)
        {
            ++j;
            if(j == k)
            {
                temp = last;
            }
            last = last->next;
        }
         swap(temp->val , first->val);
         return head ;
     }
    
    
};

static int x=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    return 0;
}();
