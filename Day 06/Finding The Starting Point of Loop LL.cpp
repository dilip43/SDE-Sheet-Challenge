#include <bits/stdc++.h>
using namespace std;

ListNode *detectCycle(ListNode *head)
{
    if (!head)
    {
        return false;
    }

    ListNode *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                fast = fast->next;
                slow = slow->next;
            }
            return fast;
        }
    }
    return NULL;
}