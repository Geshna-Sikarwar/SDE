 ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next)return head;
        ListNode *temp=head;
        ListNode *node=head;
        int c=1;
        while(node->next!=NULL)
        {
           node=node->next;
           c++;
        }
        node->next=head;
        k=k%c;
        int len=c-k;
        while(len!=1){
            temp=temp->next;
            len--;
        }
        //node->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
