#include <iostream>

template <typename T>
void Intercambiar(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
int Partition(T V[], int ini, int fin) {
    T x = V[fin];
    int i = ini;

    for (int j = ini; j <= fin - 1; j++) {
        if (V[j] <= x) {
            Intercambiar(V[i], V[j]);
            i = i + 1;
        }
    }

    Intercambiar(V[i], V[fin]);
    return i;
}

template <typename T>
void QuickSort(T V[], int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1);
        QuickSort(V, pivot + 1, fin);
    }
}

template <typename T>
void ImprimirArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
