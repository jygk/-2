#include <iostream>
#include <algorithm>
#include <cmath>
#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
int partition(int a[N], int l, int r)
{
    int pivot = a[r];
    int pIndex = l;
    for (int i = l; i < r; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[r]);
    return pIndex;
}
int randPartition(int a[N], int l, int r)
{
    int pivotIndex = rand() % (r - l + 1) + l;
    swap(a[pivotIndex], a[r]);
    return partition(a, l, r);
}

void IntroSort(int a[N], int *beg, int *en, int maxdepth)
{
    if ((en - beg) < 16) {
        InsertionSort(a, beg - a, en - a);
    }
    else if (maxdepth == 0) {
        HeapSort(a, *beg, *en + 1);
    }
    else {
        int pivot = randPartition(a, beg - a, en - a);
        IntroSort(a, beg, beg + pivot, maxdepth - 1);
        IntroSort(a, a + pivot + 1, en + 1, maxdepth - 1);
    }
}