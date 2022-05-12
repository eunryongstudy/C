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

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	//문자 , 문자열
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	//프로젝트
	//조서작성
	//이름? 나이? 거주지? 직업?

	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("몇살에요?");
	scanf_s("%d", &age);

	char live[256];
	printf("어디 사세요? ");
	scanf_s("%s", live, sizeof(live));

	char job[256];
	printf("직업이 뭐에요? ");
	scanf_s("%s", job, sizeof(job));

	// 출력
	printf("\n\n---- 신상 정보----\n\n");
	printf(" 이름        : %s\n", name);
	printf(" 나이        : %d\n", age);
	printf(" 거주지      : %s\n", live);
	printf(" 직업        : %s\n", job);

	return 0;
}