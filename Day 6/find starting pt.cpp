/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        if(head==NULL or head->next==NULL)
        return NULL;
        //int c=0;
        while(f->next!=NULL and f->next->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                ListNode *entry=head;
                while(s!=entry)
                {
                    s=s->next;
                    entry=entry->next;
                }
                return s;
            }
            
        }
        return NULL;
    }
};
