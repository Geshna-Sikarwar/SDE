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
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=NULL; //newHead
        //ListNode *node=head->next;
        while(head!=NULL)
        {
           ListNode *node=head->next; //next
           head->next=temp;
           temp=head;
           head=node;
           //head=node;
           //node=head->next;
        }
        return temp;

    }
};
