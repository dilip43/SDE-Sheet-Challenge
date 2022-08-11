#include <bits/stdc++.h>
using namespace std;

ListNode *rotateRight(ListNode *head, int k)
{
    ListNode *temp = head, *ptr = head;
    if (k == 0 || head == NULL)
        return head;

    int cnt = 1;
    while (temp->next != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    k = k % cnt;

    while (k--)
    {
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = head;

        head = temp;
        ptr = temp;

        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        temp = ptr;
    }
    return head;
}