#include<stdio.h>

int main()/*
{
	int i;
	int j;

	for (i = 1; i < 10; i++) {
		for (j = 2; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf(" \n");
	}
}*/
/*
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}*/
/*
{
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++)
		{
			printf("S");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
}*/

{
	int floor;

	printf("floor?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 +1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
