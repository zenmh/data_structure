class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *hare = head, *tortois = head;

        while(hare != NULL && hare->next != NULL) // hare && hare->next
        {
            hare = hare->next->next;
            tortois = tortois->next;

            if(hare == tortois) return true;
        }

        return false;
    }
};