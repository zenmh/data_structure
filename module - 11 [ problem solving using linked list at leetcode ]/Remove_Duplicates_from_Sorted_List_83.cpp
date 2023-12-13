class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL) return head;

        ListNode *tmp = head;

        while (tmp->next)
        {
           if (tmp->val == tmp->next->val)
           {
               ListNode *delNode = tmp->next;

               tmp->next = delNode->next;

               delete delNode;
           }

           if (tmp->next == NULL) break;
           else if (tmp->val != tmp->next->val)
           {
               tmp = tmp->next;
           }
           // value soman hole abar gura suru korbe tmp ke update chara e
        }

        return head;
    }
};