#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void SelectionSort(int a[N])
{
    for (int i = 0; i < N; i++)
    {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(a[i], a[min]);
        }
    }
}