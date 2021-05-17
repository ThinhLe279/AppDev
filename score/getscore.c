
#include"score.h"

void input_score(int score[]) {
	int i, input = 0 ; 
	// using sentinel-controlled loop to get input
	printf("enter score, -1 to end: \n");
	for (i = 0; i < MAX && input != -1; i++) {
		printf("score %d: ",i+1);
		scanf("%d", &input);
		score[i] = input;
	}

}