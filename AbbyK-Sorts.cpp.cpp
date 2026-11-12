//============================================================================
// Name        : cpp.cpp
// Author      : Abigail Kim
// Assignment  : Lab 5 ECE 2161 001
// Copyright   : Your copyright notice
// Description : Selection Sort and Quick Sort
//============================================================================

#include "AbbyK-Headers.h"

// Swaps the values of x and y
void swap(long& x, long& y) {
	long temp = x;
	x = y;
	y = temp;
}

// Selection Sort --> sorts a[0..n-1] in increasing order and each pass finds the smallest number in the unsorted part of array and switches it into the correct position.
void selectionSort(long a[], long n) {
	for (long i = 0; i < n -1; i++) {
		long smallest = i; // index of smallest number found

		for (long j = i + 1; j < n; j++) {
			if (a[j] < a [smallest])
				smallest = j;
		}

		swap(a[i], a[smallest]); // puts the smallest number in position i
		}

	}
// Quick Sort --> sorts a[lo..hi] in increasing order and picks the middle number as the pivot. Smaller numbers go to the left and the larger numbers go to the right.
void quickSort(long a[], long lo, long hi) {
	if (lo >= hi) // the 0 or 1 elements are already sorted
		return;
	long pivot = a[(lo + hi) / 2];
	long i = lo;
	long j = hi;

	while (i <= j) { // will switch the pairs that are on the opposite side of pivot
		while (a[i] < pivot) // skips numbers that are on the left side
			i ++;
		while (a[j] > pivot) // skips numbers that are on the right side
			j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	quickSort(a, lo, j); // sorts the left part
	quickSort(a, i, hi); // sorts the right part
		}
