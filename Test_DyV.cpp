#include "DyV.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
        int V[7] = {1,3,6,9,19,44,55};
        int ini=0;
        int fin =7;
        QuickSort(V, ini,fin);
        Partition(V, ini, fin);


}
