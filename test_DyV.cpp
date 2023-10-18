#include <vector>
#include "DyV.h"
#include <iostream>
#include <stdio.h>
using namespace std;
int main (){
	std::vector<int> a{1,3,6,9,19,44,55};
	cout << BusquedaBinaria(44, a,a[0], a[a.size()]);


}
