#include <locale>
#include <iostream>
#include <iomanip>
#include <random>
#include "func.h"

void Mas(int a[N])
{
	unsigned i;
	for (i = 0; i < N/2; i++)
	{
		a[i] = i;
	}
	for (i = N/2; i < N; i++)
	{
		a[i] = rand();
	}
}