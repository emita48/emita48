#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void p(int num, int num2, int answer);
//int grade;
int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();
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
}

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
}*/
{
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) {
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다");
			exit(0);
		}
		else if (answer == num1 * num2) {
			success();
			count++;
		}
		else {
			fail();
		}
	}
	printf("당신은 %d개 만큼 정답을 맞췄습니다.\n", count);
	return 0;
}

int getRandomNumber(int level)
{
	return rand() & (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2) 
{
	printf("\n\n\n######### %d 번쨰 비밀번호 #########\n", level);
	printf("\n\t%d x %d 는? \n\n", num1, num2);
	printf("##################################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1) >>");
}

void success() {
	printf("정답입니다.\n");
}

void fail() {
	printf("틀렸습니다.\n");
}