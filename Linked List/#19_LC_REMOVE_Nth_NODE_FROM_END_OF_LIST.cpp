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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head; // make a dummy node incase you want to delete head

        ListNode* slow = dummy;
        ListNode* fast = dummy;  // creating two pointers to traverse

        for(int i = 0;i<n;i++)
        fast = fast -> next;//getting fast pointer to go ahead of slow

        while(fast->next != nullptr)
        {
          slow=slow->next;
          fast = fast->next;  //fast reaches nullptr and the answer is to connect  slow to node after skipping next node of slow
        }

        slow->next = slow->next->next;//connecting slow node to the next node after deleted node
        return dummy->next;


        
    }
};