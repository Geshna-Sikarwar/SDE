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
    ListNode *getIntersectionNode(ListNode *hA, ListNode *hB) {
        ListNode *a=hA;
        ListNode *b=hB;
        if(hA==NULL or hB==NULL)
        return NULL;
        while(a!=b){
            if(a==NULL)
            a=hB;
            else
            a=a->next;
            if(b==NULL)
            b=hA;
            else
            b=b->next;
        }
        return a;
        
    }
};
