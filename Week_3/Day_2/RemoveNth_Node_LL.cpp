class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next=head;
        
        if(head==NULL||head->next==NULL) return NULL;
        ListNode*temp=head;
        int x=0;
        while(temp!=NULL){
          x++;
          temp=temp->next;
        }

        ListNode*prev=&dummy;
        ListNode*curr=head;
        
        int i=1;
        while(i!=x-(n-1)&&curr->next!=NULL){
            prev=curr;
            curr=curr->next;
            i++;
        }
       prev->next=curr->next;
       return dummy.next;
    }
};
