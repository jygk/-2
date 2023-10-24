#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void QuickSort(int a[N], int l, int r)
{
    if (l < r)
    {
        int q = part(a, l, r);
        QuickSort(a, l, q);
        QuickSort(a, (q + 1), r);
    }
}
int part(int a[N], int l, int r)
{
    int v, j, i;
    v = a[(l + r) / 2];
    i = l;
    j = r;
    while (i <= j)
    {
        while (a[i] < v)
            i++;
        while (a[j] > v)
            j--;
        if (i >= j)
            break;
        swap(a[i++], a[j--]);
    }
    return j;
}