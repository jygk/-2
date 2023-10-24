#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"
using namespace std;
void Swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}