class Solution {
public:

    void insert_at_tail (ListNode *&newHead, ListNode *&newTail, int val)
    {
        ListNode *newNode = new ListNode(val);

        if (newHead == NULL)
        {
            newHead = newNode;
            newTail = newNode;
        }
        else
        {
            newTail->next = newNode;
            newTail = newNode;
        }
    }

    ListNode* mergeNodes(ListNode* head) {
        if (head == NULL) return head;

        ListNode *tmp = head, *newHead = NULL, *newTail = NULL;
        int sum = 0;

        while (tmp)
        {
            if(tmp->val != 0)
            {
                sum += tmp->val;
            }
            else
            {
                if (sum != 0)
                {

                insert_at_tail(newHead, newTail, sum);

                sum = 0;
                }
            }

            tmp = tmp->next;
        }

        return newHead;
    }
};