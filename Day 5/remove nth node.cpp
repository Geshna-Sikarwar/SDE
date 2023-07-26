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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        {
            // handling the edge case
            if( head -> next == NULL && n == 1)
            {
                return NULL;
            }
            if( n == 1)
            {
                ListNode * temp3 = head;
                while(temp3->next->next != NULL )
                {
                    temp3 = temp3->next;

                }
                // we reached 2ndlast node
                temp3->next = NULL;
                return head;
            }

            

            
        }

       ListNode * fast = head;
       // move head upto n times
       int count = 0;
       while(count < n)
       {
           fast = fast->next;
           count++;
       }
       ListNode * slow = head;

       while( fast != NULL)
       { // we will move both slow and fast
           fast = fast->next;
           slow = slow->next;
       }
       // so now we want to delete the slow node so we can use swapping and dlt the current node;
       ListNode* todelete = slow->next;
       if(slow->next != NULL)
       {
       swap(slow->val, slow->next->val);
       }
       if(slow->next != NULL )
       slow->next = slow->next->next;
       delete todelete;
       return head;

    }
};
