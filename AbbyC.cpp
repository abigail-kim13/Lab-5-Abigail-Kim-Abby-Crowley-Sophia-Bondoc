#include <iostream>
using namespace std;

// ---------- Bubble Sort ----------
void bubbleSort(long arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// ---------- Merge Sort (one function) ----------
void mergeSort(long arr[], int n) {
    long* temp = new long[n];                  // scratch space

    for (int width = 1; width < n; width *= 2) {          // size of each sorted run
        for (int left = 0; left < n; left += 2 * width) { // start of each pair of runs
            int mid = left + width;                       // start of the right run
            int right = left + 2 * width;                 // end of the right run (exclusive)
            if (mid > n) mid = n;                         // clamp at the array's end
            if (right > n) right = n;

            int i = left, j = mid, k = left;
            while (i < mid && j < right) {                // merge the two runs into temp
                if (arr[i] <= arr[j]) temp[k++] = arr[i++];
                else                  temp[k++] = arr[j++];
            }
            while (i < mid)   temp[k++] = arr[i++];       // leftovers from left run
            while (j < right) temp[k++] = arr[j++];       // leftovers from right run
        }
        for (int x = 0; x < n; x++) arr[x] = temp[x];     // copy merged result back
    }

    delete[] temp;
}