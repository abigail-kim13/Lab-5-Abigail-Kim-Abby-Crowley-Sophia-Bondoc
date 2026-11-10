#include <iostream>
#include <vector>
#include "AbbyC.cpp"
using namespace std;

int main() {
    vector<int> data = {64, 34, 25, 12, 22, 11, 90, 5};

    printArray(data);

    vector<int> a = data;
    bubbleSort(a);
    cout << "Bubble sort: ";
    printArray(a);

    vector<int> b = data;
    mergeSort(b, 0, b.size() - 1);
    cout << "Merge sort:  ";
    printArray(b);

    return 0;
}
