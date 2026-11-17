// Sophia Therese Bondoc
// Lab 5, ECE 2161-001
// Insertion and shell data sorting algorithms

#include "insertion_shell.h"

#include <iostream>
using namespace std;

// Insertion Sort: builds a sorted section at the front of the array by taking each element and shifting
// larger elements right to make room for it.
void insertionSort(long data[], int n)
{
    for (int i = 1; i < n; i++)
    {
        long key = data[i];   // element to insert into the sorted section
        int j = i - 1;

        // Shift elements greater than key one position to the right
        while (j >= 0 && data[j] > key)
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;    // drop key into its correct spot
    }
}

// Shell Sort: insertion sort applied to elements that are 'gap' apart, shrinking the gap each pass until
// it is 1 (a final insertion sort pass).
void shellSort(long data[], int n)
{
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        // Gapped insertion sort for the current gap value
        for (int i = gap; i < n; i++)
        {
            long temp = data[i];
            int j = i;

            while (j >= gap && data[j - gap] > temp)
            {
                data[j] = data[j - gap];
                j -= gap;
            }
            data[j] = temp;
        }
    }
}
