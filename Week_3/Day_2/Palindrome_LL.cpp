class Solution {
private:
    ListNode*find_middle(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
      return slow;  
    } 

    ListNode*reverse(ListNode*head){
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }   
public:
    bool isPalindrome(ListNode* head) {

       if(head==NULL || head->next==NULL) return true;

        ListNode*middle=find_middle(head);

        ListNode*h1=head;
        ListNode*h2=reverse(middle);
        while(h2){
          if(h1->val!=h2->val){
            return false;
          }
          h1=h1->next;
          h2=h2->next;
        }
      return true;
    }

};
