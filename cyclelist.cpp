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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        ListNode *step=head,*doublestep=head;
        while(doublestep->next && doublestep->next->next!=NULL)
        {
            step=step->next;
            doublestep=doublestep->next->next;
			// there is a cycle if by doublesteping you get back to step
            if(step==doublestep)
                return true;
        }
		// no cycle
        return false;
    }
};