#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void HeapSort(int a[N], int l, int r)
{
    int j, Size;
    for (j = (r/2-1); j>=l; j--)
        Heapify(a, j, r);
    Size = r;
    while (Size > 2)
    {
        swap(a[l], a[Size - 1]);
        Size--;
        if (Size > 2)
            SiftDown(a, Size);
    }
    if (a[l] > a[l+1])
        swap(a[l], a[l+1]);
}
void Heapify(int a[N], int j, int n)
{
    int larg = j;
    int l = 2 * j + 1;
    int r = 2 * j + 2;
    if ((l < n)&&(a[l] > a[larg]))
        larg = l;
    if ((r < n) && (a[r] > a[larg]))
        larg = r;
    if (larg != j)
    {
        swap(a[j], a[larg]);
        Heapify(a, larg, n);
    }
}
void SiftDown(int a[N], int Size)
{
    int l, r, i;
    i = 0;
    while ((2 * i + 1) < Size)
    {
        l = 2 * i + 1;
        r = 2 * i + 2;
        if (a[i] < a[l])
        {
            if (a[l] < a[r])
            {
                swap(a[i], a[r]);
                i = r;
            }
            else
            {
                swap(a[i], a[l]);
                i = l;
            }
        }
        else
            if (a[i] < a[r])
            {
                swap(a[i], a[r]);
                i = r;
            }
            else
                break;
        
    }
}