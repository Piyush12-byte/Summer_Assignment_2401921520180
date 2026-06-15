class Solution {
public:
    bool hasCycle(ListNode *head) {
      //floyd detection algorithm hai ye
        
        if(head==NULL) return false;

        ListNode*slow=head;
        ListNode*fast=head;

        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;

            if(slow==fast) return true;
        }
      return false;  
    }
};
