class Solution {
private:
    ListNode*get_middle(ListNode*head){

        // agar list khali ho ya bas ek node ho
        if(head==NULL||head->next==NULL) return head;

        
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }    
public:
    ListNode* middleNode(ListNode* head) {
       ListNode*ans=get_middle(head);
       return ans;
    }
};
