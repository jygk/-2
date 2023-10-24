#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void BubbleSort(int a[N])
{
    int f, i, j;
    i = 1;
    while (i < (N - 1))
    {
        f = 0;
        j = 0;
        while (j < (N - i))
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                f = 1;
            }
            j++;
        }
        if (f == 0)
            break;
        i++;
    }
}