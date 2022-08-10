#include <bits/stdc++.h>
using namespace std;

bool hasCycle(ListNode *head)
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
            return true;
    }
    return false;
}