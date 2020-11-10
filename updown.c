#include<stdio.h>
#include<stdlib.h>


int main(void) {

	int a = (rand() % 100)+1;
	int c;
	while (1) {

		printf("1~100 사이의 값 입력 :\n");
		scanf_s("%d", &c);
		if (c > a) {
			printf("입력값이 숫자보다 더 큽니다\n");
		}
		else if (c < a) {
			printf("입력값이 숫자보다 더 작습니다\n");
		}
		else {
			printf("정답");
			break;
		}
	}
}
