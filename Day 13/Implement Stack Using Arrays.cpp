#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int *data;
    int nextIndex;
    int size;

public:
    Stack(int capacity)
    {
        data = new int[capacity];
        nextIndex = 0;
        size = capacity;
    }

    void push(int num)
    {
        if (nextIndex == size)
        {
            return;
        }
        data[nextIndex] = num;
        nextIndex++;
    }

    int pop()
    {
        if (isEmpty())
        {
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            return -1;
        }
        return data[nextIndex - 1];
    }

    int isEmpty()
    {
        if (nextIndex == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isFull()
    {
        if (nextIndex == size)
        {
            return 1;
        }
        return 0;
    }
};