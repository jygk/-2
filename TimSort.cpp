#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void minRun(int *minrun)
{
    int flag = 0;
    int n = N;
    while (n >= 64)
    {
        flag |= n & 1;
        n >>= 1;
    }
    *minrun = (n + flag);
}
void merge(int a[N], int l, int m, int r)
{
    int len1 = m - l + 1, len2 = r - m;
    int left[N], right[N];
    for (int i = 0; i < len1; i++)
        left[i] = a[l + i];
    for (int j = 0; j < len2; j++)
        right[j] = a[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < len1 && j < len2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < len1)
    {
        a[k] = left[i];
        k++;
        i++;
    }

    while (j < len2)
    {
        a[k] = right[j];
        k++;
        j++;
    }
}

void TimSort(int a[N])
{
    int Size = N;
    int minrun = 1;
    minRun(&minrun);
    for (int i = 0; i < N; i += minrun)
        InsertionSort(a, i, min((i + minrun), N));
    for (int size = minrun; size < N; size = 2 * size)
    {
        for (int l = 0; l < N; l += 2 * size)
        {
            int mid = l + size;
            int r = min((l + 2 * size), N);
            merge(a, l, mid, r);
        }
    }
}
