#include<vector>
#include<stdio.h>
int BusquedaBinaria(int X, std::vector<int>& a, int ini, int fin){
        if (ini > fin)
                 return -1;
        int medio = (ini + fin) / 2;
        if (a[medio] == X){
                 return medio;
	}else if(a[medio] > X){
		 fin = medio -1;
		 return BusquedaBinaria(X, a, ini, fin);
	}else{
		 ini = medio +1;
                 return BusquedaBinaria(X, a, ini, fin);
	}
}
