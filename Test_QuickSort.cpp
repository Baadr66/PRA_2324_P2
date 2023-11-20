#include <iostream>
#include "DyV.h"
#include<chrono>

using namespace std;
int main() {
    int array[] = {12, 4, 5, 6, 7, 3, 1, 15};
    int size = 8;

    cout << "Array original:" << endl;
    ImprimirArray(array, size);

    auto start = chrono::system_clock::now();
    QuickSort(array, 0, size - 1);
    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    cout << "Time: " << duration.count() << "s" << endl;
    cout << "Array ordenado:" << endl;
    ImprimirArray(array, size);

    return 0;
}
