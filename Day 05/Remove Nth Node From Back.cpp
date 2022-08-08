#include <bits/stdc++.h>
using namespace std;

ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *slow = head, *fast = head;
    while (n-- and fast)
    {
        fast = fast->next;
    }

    if (fast == NULL)
        fast->next = head;

    while (fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = slow->next->next;
    return head;
}