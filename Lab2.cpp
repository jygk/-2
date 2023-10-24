#include <locale>
#include <iostream>
#include <iomanip>
#include "func.h"

using namespace std;
int main()
{
    int Vart;
    double d;
    int a[N], b[N];
    int n;
    int maxdepth = 2 * log(N);
    setlocale(LC_ALL, "Russian");
    Mas(a);
    cout << "Исходный массив с данными: \n";
    /*for (unsigned i = 0; i < N; i++) {
        cout << a[i] << ' ';
        b[i] = a[i];
    }*/
    cout << "\n";
    cout << "1. Сортировка выбором\n2. Сортировка вставками\n3. Сортировка пузырьком\n4. Сортировка слиянием\n5. Быстрая сортировка\n6. Сортировка Шелла\n";
    cout << "7. Пирамидальная сортировка\n8. Timsort\n9. IntroSort\n \n";
    cout << "Введите номер функции: \n";
    cin >> Vart;
    switch (Vart) {
    case 1:  d = clock();
        cout << d << "\n"; 
        SelectionSort(a); 
        cout << clock() - d << "\n";
        break;
    case 2: d = clock();
        cout << d << "\n";
        InsertionSort(a, 0, N); 
        cout << clock() - d << "\n"; break;
    case 3:  d = clock();
        cout << d << "\n";
        BubbleSort(a); 
        cout << clock() - d << "\n"; break;
    case 4: d = clock();
        cout << d << "\n";
        MergeSort(a, b, 0, (N - 1));
        cout << clock() - d << "\n"; break;
    case 5: d = clock(); 
        cout << d << "\n";
        QuickSort(a, 0, (N - 1)); 
        cout << clock() - d << "\n";break;
    case 6: d = clock();
        cout << d << "\n"; 
        ShellSort(a, 0, (N - 1));
        cout << clock() - d << "\n"; break;
    case 7: d = clock();
        cout << d << "\n"; 
        HeapSort(a, 0, N);
        cout << clock() - d << "\n"; break;
    case 8: d = clock();
        cout << d << "\n"; 
        TimSort(a);
        cout << clock() - d << "\n"; break;
    case 9: d = clock();
        cout << d << "\n";
        IntroSort(a, 0, N, maxdepth - 1); 
        cout << clock() - d << "\n"; break;
    default: cout << "Не существует соответствующей функции. \n";
        break;
    }
    cout << "\n";
   /* for (unsigned i = 0; i < N; i++)
        cout << a[i] << ' ';
    cout << "\n";*/
}
