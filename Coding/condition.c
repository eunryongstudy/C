#include<stdio.h>
int main(void){
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
	for (int i = 1; i <= 30; i++)
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
	}
	return 0;
}