#include <iostream>
#include "AbbyK-Headers.h"
#include "AbbyC.h"
#include "insertion_shell.h"
using namespace std;

int main() {
    const int N = 8;
    long data[N] = {64, 34, 25, 12, 22, 11, 90, 5};

    long a[N];
    for (int i = 0; i < N; i++) a[i] = data[i];
    bubbleSort(a, N);
    cout << "Bubble sort: ";
    for (int i = 0; i < N; i++) cout << data[i] << " ";
    cout << "\n";

    long b[N];
    for (int i = 0; i < N; i++) b[i] = data[i];
    mergeSort(b, N);
    cout << "Merge sort:  ";
    for (int i = 0; i < N; i++) cout << data[i] << " ";
    cout << "\n";

    long c[N];
    for (int i = 0; i < N; i++) c[i] = data[i];
    insertionSort(c, N);
    cout << "Insertion sort: ";
    for (int i = 0; i < N; i++) cout << c[i] << " ";
    cout << "\n";

    long d[N];
    for (int i = 0; i < N; i++) d[i] = data[i];
    shellSort(d, N);
    cout << "Shell sort: ";
    for (int i = 0; i < N; i++) cout << d[i] << " ";
    cout << "\n";

    long e[N];
     for (int i = 0; i < N; i++) e[i] = data[i];
     selectionSort(e, N);
     cout << "Selection sort: ";
     for (int i = 0; i < N; i++) cout << e[i] << " ";
     cout << "\n";

     long f[N];
     for (int i = 0; i < N; i++) f[i] = data[i];
     quickSort(f, N);
     cout << "Quick sort: ";
     for (int i = 0; i < N; i++) cout << f[i] << " ";
     cout << "\n";

    return 0;
}
