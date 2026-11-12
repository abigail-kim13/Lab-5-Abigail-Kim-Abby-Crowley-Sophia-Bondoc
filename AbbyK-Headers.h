// Name        : cpp.cpp
// Author      : Abigail Kim
// Assignment  : Lab 5 ECE 2161 001
// Copyright   : Your copyright notice
// Description : Selection Sort and Quick Sort

#ifndef ABBYK_HEADERS_H_
#define ABBYK_HEADERS_H_

#include <string>
#include <unistd.h>
#define MAXSIZE 2100000
using namespace std;

void printmenu();
void printarray(long data[], long size);
int readfile(string infilename, long data[]);
int writefile(long data[], long size, string outfilename);
void swap(long& x, long& y);

// Sort functions
void selectionSort(long a[], long n);
void quickSort(long a[], long lo, long hi);



#endif /* ABBYK_HEADERS_H_ */
