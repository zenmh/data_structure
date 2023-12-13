// Approach - 1
class Solution {
public:
    int size ( ListNode *head)
    {
        int cnt = 0;
        ListNode *tmp = head;

        while(tmp)
        {
            tmp = tmp->next;
            cnt++;
        }

        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int n = size(head) / 2;
        ListNode *tmp = head;

        for(int i = 1; i <= n; i++)
            tmp = tmp->next;

        return tmp;
    }
};

// Approach - 2 [ slow and fast technique ]
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode *hare = head, *tortois = head;

       while(hare != NULL && hare->next != NULL)
       {
           hare = hare->next->next;
           tortois = tortois->next;
       }

       return tortois;
    }
};