
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
    ListNode* middleNode(ListNode* head) {
        // this algorithm was suggested on LeetCode: When traversing the list 
        // with a pointer slow, make another pointer fast that traverses twice 
        // as fast. When fast reaches the end of the list, slow must be in the middle.
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
        /*
        int middle;
        if (here->next == nullptr) {
            return nullptr;
        }
        else {
            ListNode* prior = head;
            int counter = 1;
            while(here->next != nullptr) {
                prior = here;
                here = here->next;
                counter++;
            }
            middle = counter/2 +1;
            
            here = head;
            for(int i = 1; i < middle; i++){
                here = here->next;
            }
            return here;
        }
        */
    }
};