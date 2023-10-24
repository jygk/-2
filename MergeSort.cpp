#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void MergeSort(int a[N], int b[N], int l, int r)
{
    if (r <= l) {
        return;
    }
    int mid = (l + r) / 2;
    MergeSort(a, b, l, mid);
    MergeSort(a, b, mid + 1, r);
    Merge(a, b, l, mid, r);
}
void Merge(int a[N], int b[N], int l, int mid, int r)
{
    int k = l, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j]) {
            b[k++] = a[i++];
        }
        else {
            b[k++] = a[j++];
        }
    }
    while (i <= mid) {
        b[k++] = a[i++];
    }
    for (int i = l; i <= r; i++) {
        a[i] = b[i];
    }
}

