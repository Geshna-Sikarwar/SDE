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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *s= new ListNode();
        ListNode *temp=s;
        int c=0;
        //int s=0;
        while(l1!=NULL or l2!=NULL or c)
        {
            int s=0;
            if(l1!=NULL)
            {s+=l1->val;
            l1=l1->next;}
            if(l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            
            s+=c;
            c=s/10;
            //s=s/10;
            ListNode *t= new ListNode(s%10);
            //t->val=s;
            temp->next=t;
            temp=t;
        }
        return s->next;
    }
};
