#include"score.h"
//this function will display ll valid marks as first part, and
//statistic of marks as second part
void output_result(int m[], int st[], int score[]) {
	int i;
	printf("here are the marks:\n ");
	for (i = 0; i < MAX && m[i] != -1; i++) 
		printf("%6d", score[i]);
	printf("\n");
	for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("%6d", m[i]);
	}

	puts("");// make a new line
	printf("here are the statistic: \n");
	for (i = 0; i < 6; i++) {
		printf("mark %d: %d hits\n", i, st[i]);
	}
}