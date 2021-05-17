/*this program will take 2 positive int from the user,
and display all the number divisible by 3 between these 2 ints*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int a, b;
	printf("enter 2 positive integers: ");
	scanf("%d %d", &a, &b);
	if (a > b) {
		int c = a;
		a = b;
		b = c;
	}
	for (int i = a,d = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d ", i);
			d++;
			if (d % 10 == 0) printf("\n");
		}
	}
}