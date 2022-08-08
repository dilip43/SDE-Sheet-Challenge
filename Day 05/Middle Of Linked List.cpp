#include <bits/stdc++.h>
using namespace std;

ListNode *middleNode(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}