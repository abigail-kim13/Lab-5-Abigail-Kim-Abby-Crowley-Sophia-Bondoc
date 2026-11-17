// Sophia Therese Bondoc, Abby Crowley, & Abigail Kim
// Lab 5, ECE 2161-001
// Menu-driven program that reads numbers from a file, sorts them with six
// different algorithms, and reports the CPU time each sort takes.

#include <iostream>
<<<<<<< HEAD
#include <fstream>
#include <string>
#include <ctime>
=======
#include "AbbyK-Headers.h"
>>>>>>> branch 'main' of git@github.com:abigail-kim13/Lab-5-Abigail-Kim-Abby-Crowley-Sophia-Bondoc.git
#include "AbbyC.h"
#include "Sophia.h"
using namespace std;

const int MaxSize = 2100000;

<<<<<<< HEAD
// Prints the main menu (C-F names are placeholders until all six sorts exist).
void printMenu()
{
    cout << "\n(1) Read Data from input file\n";
    cout << "(2) Sort Data using Bubble Sort\n";
    cout << "(3) Sort Data using Merge Sort\n";
    cout << "(4) Sort Data using Insertion Sort\n";
    cout << "(5) Sort Data using Shell Sort\n";
    cout << "(6) Sort Data using E Sort\n";
    cout << "(7) Sort Data using F Sort\n";
    cout << "(0) Exit\n";
    cout << "Enter choice: ";
=======
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
>>>>>>> branch 'main' of git@github.com:abigail-kim13/Lab-5-Abigail-Kim-Abby-Crowley-Sophia-Bondoc.git
}

// Reads numbers from the file into data[]. Returns how many were read.
int readData(const string& filename, long data[])
{
    ifstream in(filename.c_str());
    if (!in)
    {
        cout << "Could not open " << filename << endl;
        return 0;
    }
    int count = 0;
    while (count < MaxSize && in >> data[count])
        count++;
    in.close();
    return count;
}

// Writes the first n values of data[] to the output file, one per line.
void writeData(const string& filename, const long data[], int n)
{
    ofstream out(filename.c_str());
    for (int i = 0; i < n; i++)
        out << data[i] << "\n";
    out.close();
}

// Copies the original data, times the sort on the copy, reports CPU time
// in seconds, and saves the sorted result to a file.
void timeSort(void (*sortFunc)(long[], int), const string& name,
              const string& outFile, const long original[], long work[], int n)
{
    for (int i = 0; i < n; i++)
        work[i] = original[i];

    double begin_time = clock();
    sortFunc(work, n);
    double end_time = clock();

    double cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
    cout << name << " finished in " << cpu_time_used << " seconds\n";

    writeData(outFile, work, n);
    cout << "Sorted data saved to " << outFile << endl;
}

int main()
{
    long* original = new long[MaxSize];
    long* work = new long[MaxSize];
    int n = 0;
    int choice = -1;

    while (choice != 0)
    {
        printMenu();
        cin >> choice;

        if (choice >= 2 && choice <= 7 && n == 0)
        {
            cout << "Please read the data first (option 1).\n";
            continue;
        }

        switch (choice)
        {
        case 1:
            n = readData("lab5_input.txt", original);
            cout << n << " items read.\n";
            break;
        case 2:
            timeSort(bubbleSort, "Bubble Sort", "lab5_Bubble_out.txt", original, work, n);
            break;
        case 3:
            timeSort(mergeSort, "Merge Sort", "lab5_Merge_out.txt", original, work, n);
            break;
        case 4:
            timeSort(insertionSort, "Insertion Sort", "lab5_Insertion_out.txt", original, work, n);
            break;
        case 5:
            timeSort(shellSort, "Shell Sort", "lab5_Shell_out.txt", original, work, n);
