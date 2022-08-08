#include <bits/stdc++.h>
using namespace std;

ListNode *reverseList(ListNode *head)
{
    ListNode *curr = head, *prev = NULL.*fwd = NULL;
    while (curr != NULL)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}
