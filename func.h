#pragma once
const int N = 100000;
void Mas(int a[N]);
void swap(int *x, int *y);
void SelectionSort(int a[N]);
void InsertionSort(int a[N], int l, int r);
void BubbleSort(int a[N]);
void QuickSort(int a[N], int l, int r);
int	 part(int a[N], int l, int r);
void ShellSort(int a[N], int l, int r);
void HeapSort(int a[N], int l, int r);
void Heapify(int a[N], int j, int r);
void SiftDown(int b[N], int Size);
void MergeSort(int a[N], int b[N], int l, int r);
void Merge(int a[N], int b[N], int l, int mid, int r);
void TimSort(int a[N]);
void IntroSort(int a[N], int l, int r, int maxdepth);
void minRun(int *minrun);