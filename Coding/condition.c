#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main_condition(void){
	/*int age = 4;
	if (age >= 20)
	{
		printf("성인입니다.");
	}
	else if (age >= 17 && age <= 20)
	{
		printf("고등학생입니다.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.");
	}
	else if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.");
	}
	else {
		printf("어린이입니다.");
	}*/

	//break / continue
	//1~30안에서 1~5까지 조별 발표
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6) 
		{
			printf("나머지 학생은 집에 가세요 \n");
			break;
		}
		printf("%d 번 학생 조별 발표 준비를 하세요\n", i);
	}*/
	//1~30 안에서 6~10까지 조별 발표 7번은 결석
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번 학생 조별 발표 준비를 하세요\n", i);
		}
	}*/
	// && ||
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a와 b, 혹은 c와 d가 같습니다\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else {
		printf("몰라요\n");
	}*/
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("가위\n");break;
	case 1: printf("바위\n");break;
	case 2: printf("보\n");break;
	default:printf("몰라요\n");break;
	}*/
	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;//1~100
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("남은 기회 : %d \n", chance--);
		printf("숫자를 맞춰 보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down \n\n");
		}
		else if (answer < num)
		{
			printf("Up \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류가 발생했어요 \n\n");
		}
		if (chance == 0)
		{
			printf("기회를 모두 소진했습니다. \n\n");
		}
	}
	return 0;
}