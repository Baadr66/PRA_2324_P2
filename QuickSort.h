#include <stdio.h>
int Partition(int V[], int ini, int fin){
         int x = V[fin];
         int i = ini;
         for(int j = ini; j <= (fin - 1); j++){
               if ( V[j] <= x){
                     int aux;
		     V[i]=aux;
		     aux=V[j];
		     V[j]=V[i];
                     i = i + 1;
	       }
	 int aux;
	 V[i]=aux;
         aux=V[fin];      
	 V[i]=V[fin];
	 } 
	return i;
               }

void QuickSort( int V[] ,int ini, int fin){
        if (ini < fin){
                 int pivot = Partition(V, ini, fin);
                 QuickSort(V, ini, pivot - 1);
                 QuickSort(V, pivot + 1, fin);
        }
}
