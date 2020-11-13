#include<stdio.h>
#include<stdlib.h>
void p(int num, int num2, int answer);
int grade;
int main(void) /* {
	int num = 2;
	num += 3;
	p(num);
	num -= 2;
	p(num);
	num *= 2;
	p(num);
	num /= 2;
	p(num);
	return 0;
}*/


/*{
	int j = 0;
	for (int i = 0; i < 5; i++) {
		p(num);
		if (i == j){
			j++;
			num += 3;
		}
	}
}*/

{
	while (1) {
		int answer = 0;
		int num = (rand() % 100) + 1;
		int num2 = (rand() % 100) + 1;
		printf("%d + %d = ?\n", num, num2);
		scanf_s("%d", &answer);
		p(num, num2, answer);
		if (grade == 100) {
			printf("Your grade is 100 Point\n");
			return 1;
		}
		else if (grade == -100) {
			printf("Your Stupid...\n");
			grade = 0;
		}
	}
	return 0;
}

void p(int num, int num2, int answer){
	while (1) {
		if (num + num2 == answer) {
			printf("Correct!\n");
			grade += 10;
		}
		else {
			printf("Wrong!\n");
			grade -= 10;
		}
		return 1;
	}
}