#include <iostream>
#include "AbbyC.cpp"
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

    return 0;
}
