#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void ShellSortHibb(int a[N], int l, int r)
{
    int i = 0, j, tmp, k, st = N;
    int d = pow((float)2, N) - 1;
    while (d > 0)
    {
        for (i = 0; i < d; i++)
        {
            for (j = 0; j < N; j += d)
            {
                tmp = a[j];
                for (k = j - d; k >= 0 && tmp < a[k]; k -= d)
                {
                    a[k + d] = a[k];
                }
                a[k + d] = tmp;

            }

        }
        st--;
        d = pow((float)2, st) - 1;
    }
}