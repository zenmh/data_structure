class Solution {
public:

    void insert_at_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void reverse(ListNode *&head, ListNode *cur)
    {
        if(cur->next == NULL)
        {
            head = cur;
            return;
        }

        reverse(head, cur->next);

        cur->next->next = cur;
        cur->next = NULL;
    }

    bool isPalindrome(ListNode* head) {
        ListNode *head2 = NULL, *tail2 = NULL, *tmp = head;

        while(tmp)
        {
        insert_at_tail(head2, tail2, tmp->val);
        tmp = tmp->next;
        }

        reverse(head2, head2);

        tmp = head;
        ListNode *tmp2 = head2;

        while(tmp)
        {
            if(tmp->val != tmp2->val) return false;

            tmp = tmp->next;
            tmp2 = tmp2->next;
        } 

        return true;


    }
};