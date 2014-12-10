// Datei: sort.cpp
#include "sort.h" 

void sortiere(int a[], const unsigned int N){
	for (int i = 1; i < N; i++){
		int einzusortieren = a[i];
		unsigned int j = i;
		while (j > 0 && a[j - 1] > einzusortieren){
			a[j] = a[j - 1];
			j -= 1;
		}
		a[j] = einzusortieren;
	}
	return;
}
