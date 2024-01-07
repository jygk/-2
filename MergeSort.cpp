#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void MergeSort(int a[N], int l, int r)
{
    if ((l+1) >= r) {
        return;
    }
    int mid = (l + r) / 2;
    MergeSort(a, l, mid);
    MergeSort(a, mid, r);
    Merge(a, l, mid, r);
}
void Merge(int a[N], int l, int mid, int r)
{
    int i = 0, j = 0;
    int *res;
    res = new int[r - l];
    while ((l + i < mid)&&(mid + j < r))
    {
        if (a[l + i] < a[mid + j]) {
            res[i + j] = a[l + i]; 
            i++;
        }
        else {
            res[i + j] = a[mid + j];
            j++;
        }
    }
    while (l + i < mid) {
        res[i + j] = a[l + i];
        i++;
    }
    while (mid + j < r) {
        res[i + j] = a[mid + j];
        j++;
    }
    for (int x = 0; x < (i + j); x++) {
        a[l + x] = res[x];
    }
}

