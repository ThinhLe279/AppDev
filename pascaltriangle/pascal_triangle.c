#include "pascal.h"

void tab(int n){
	int i;
	for (i = 0; i<n; i++){
		printf("\t");
	}
}
void pascal_triangle(int v) {
	int i, j, k, count = v-1;
	for (i = 0; i < v ; i++){
		for (j = 0; j <= i ; j++) {
			if (j == 0){
				tab(count);
				count --;
			}
			printf("\t\t%d", comb(i, j));
		}
		printf("\n");
		//count--;
	}
}
