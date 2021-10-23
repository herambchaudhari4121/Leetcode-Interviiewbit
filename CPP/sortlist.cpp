/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *merge(ListNode *l1, ListNode *l2) {
    
    if(NULL == l1) return l2;
    if(NULL == l2) return l1;
    
    ListNode* head=NULL;    // head of the list to return
    
    // find first element (can use dummy node to put this part inside of the loop)
    if(l1->val < l2->val)       { head = l1; l1 = l1->next; }
    else                        { head = l2; l2 = l2->next; }
    
    ListNode* p = head;     // pointer to form new list
    
    // I use && to remove extra IF from the loop
    while(l1 && l2){
        if(l1->val < l2->val)   { p->next = l1; l1 = l1->next; }
        else                    { p->next = l2; l2 = l2->next; }
        p=p->next;
    }
    
    // add the rest of the tail, done!
    if(l1)  p->next=l1;
    else    p->next=l2;
    
    return head;
}

ListNode* middle(ListNode* head ) {
      
    ListNode *prevPtr = NULL;
    ListNode *slowPtr = head;
    ListNode *fastPtr = head;

    while (fastPtr != NULL && fastPtr->next != NULL) {
      prevPtr = slowPtr;
      slowPtr = slowPtr->next;
      fastPtr = fastPtr->next->next;
    }

    if (prevPtr != NULL) {
      prevPtr->next = NULL;
    }

    return slowPtr;
        
    }

void MergeSort(ListNode** headRef) 
{ 
    ListNode* head = *headRef, *a, b;
  
    /* Base case -- length 0 or 1 */
    if ((head == NULL) || (head->next == NULL)) { 
        return; 
    } 
  
    /* Split head into 'a' and 'b' sublists */
    b=middle(head); 
    a=head;
  
    /* Recursively sort the sublists */
    MergeSort(&a); 
    MergeSort(&b); 
  
    /* answer = merge the two sorted lists together */
    *headRef = merge(a, b); 
} 

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        MergeSort(&head);
        return head;
    }
};
