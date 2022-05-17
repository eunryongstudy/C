#include<stdio.h>
#include<time.h>

int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main(void)
{
	long startTime = 0;//시작시간
	long totalElapsedTime = 0;//총 경과시간
	long prevElapsedTime = 0;// 이전 경과시간

	int num; //몇 번 어항에 물을 주는지
	initData();

	cursor = arrayFish;

	startTime = clock();// 현재시간을 1000분의 1초(millsecond)까지 반환
	while(1)
	{
		printfFishes();
		printf("몇 번 어항에 물을 주시겠습니까?");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("입력 값이 잘못 되었습니다.");
			continue;

		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);

		//직전 물 준 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf(" 최근 경과 시간 : %ld 초 \n", prevElapsedTime);
		
		//어항의 물 증발
		decreaseWater(prevElapsedTime);
	}
	

	return 0;
	getchar();
}

void initData()
{
	level = 1;// 게임레벨
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;//어항의 물 높이
	}
}
void printfFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);

	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3은 난이도 조절용
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}