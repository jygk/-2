#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void InsertionSort(int a[N], int l, int r)
{
    int j;
    for (int i = l + 1; i < r; i++)
    {
        j = i;
        while ((j > 0) && (a[j] < a[j - 1]))
        {
            swap(a[j], a[j-1]);
            j = j - 1;
        }
    }
}