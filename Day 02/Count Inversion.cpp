#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int left, int right)
{
    int i, j, k;
    int mid = (left + right) / 2;

    i = left;
    j = mid + 1;
    k = left;

    int temp[100000];
    int inv_count = 0;

    while (i <= mid and j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i + 1);
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return inv_count;
}

int _mergeSort(int arr[], int left, int right)
{

    if (left >= right)
        return 0;

    int mid = (left + right) / 2;
    int x = _mergeSort(arr, left, mid);
    int y = _mergeSort(arr, mid + 1, right);
    int z = merge(arr, left, right);

    return x + y + z;
}