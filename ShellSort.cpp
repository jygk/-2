#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void ShellSort(int a[N], int l, int r)
{
    int i, j;
    int d = (r - l) / 2;
    while (d > 0)
    {
        for (i = l + d; i <= r; i++)
        {
            for (j = i; (j - l) >= d; j -= d)
                if (a[j] < a[j - d])
                    swap(a[j], a[j - d]);
        }
        d = d / 2;
    }
}