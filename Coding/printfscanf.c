#include<stdio.h>
int main(void)
{
	//정수형 변수
	/*int age = 28;
	printf("%d\n", age);
	age = 14;
	printf("%d\n", age);*/

	//실수형 변수
	/*float f = 68.5f;
	printf("%.3f\n", f);
	double d = 55.53;
	printf("%.2lf\n", d);*/

	//상수
	/*const int YEAR = 1995;
	printf("태어난 년도 : %d\n", YEAR);*/

	//연산
	/*int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);*/

	//scanf
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);

	return 0;
}