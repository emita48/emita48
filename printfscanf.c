#include<stdio.h>

int main() {
	/*
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	
	float f = 3.14;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.3f\n", d);

	
	const int YEAR = 2000;
	printf("%d\n", YEAR);
	//YEAR = 2001; const 상수 때문에 선언 불가능
	printf("%d\n", YEAR);

	

	int add = 3 + 7;

	printf("%d\n", add);
	printf("%d x %d = %d\n", 3, 7, 3 * 7);
	
	int input;
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &input);
	printf("입력값은 : %d", input);
	
	int one, two, three;
	printf("숫자를 입력하세요 \n");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("%d %d %d\n", one, two, three);
	
	char c;
	printf("문자를 입력하세요");
	scanf_s("%c", &c);
	printf("%c", c);


	char str[256];
	scanf_s("%s", str, sizeof(str));//문자열 입력받을땐 &없음
	printf("%s\n", str);
	return 0;

	*/

	char name[10];
	int age;
	float weight;
	double height;
	char crime[20];
	char str[512];
	printf("이름 \n");
	scanf_s("%s", name, sizeof(name));
	printf("나이 \n");
	scanf_s("%d", &age);
	printf("몸무게 \n");
	scanf_s("%f", &weight);
	printf("키 \n");
	scanf_s("%lf", &height);
	printf("범죄명\n");
	scanf_s("%s", crime, sizeof(crime));

	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게 : %.2f\n", weight);
	printf("키 : %.2lf\n", height);
	printf("범죄명 : %s\n", crime);

	printf("사건 경위\n");
	scanf_s("%s", str, sizeof(str));
	printf("사건 경위 : %s\n", str);
	return 0;

}