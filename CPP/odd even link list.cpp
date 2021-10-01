class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL || head->next->next==NULL)
            return head;
        ListNode *a=head, *b=head->next ,*t=head->next;
        while(1)
        {   if(b->next!=NULL)
             a->next=b->next;
            else
                break;
            if(b->next->next!=NULL)
             b->next=b->next->next;
            else
            {b->next=b->next->next;
             a=a->next;
            break;}
         if(a->next!=NULL)
             a=a->next;
          if(b->next!=NULL)
             b=b->next;
        }
        a->next=t;
        // b->next=    ;
        return head;
    }
};
