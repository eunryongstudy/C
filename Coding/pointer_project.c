#include<stdio.h>
#include<time.h>

int level;
int arrayFish[6];
int* cursor;
void initData();
void printfFishes();
void decreaseWater(long elapsedTime);
int checkFishalive();

int main_pointer_project(void)
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
		getchar();
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

		if (cursor[num - 1] < 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다... \n", num);
		}
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d번 어항에 물을 줍니다.", num);
			cursor[num - 1] += 1;
		}

		// 20초마다 레벨업
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" === 축 레벨업! 레벨이 %d에서 %d로 올랐습니다.\n\n", level - 1, level);

			if (level == 5)
			{
				printf(" 축하합니다 최고레벨에 도달했습니다. 게임을 종료합니다. \n");
				exit(0);
			}
		}

		//모든 물고기가 죽었는지 확인
		if (checkFishalive == 0)
		{
			//물고기 모두 사망
			printf("모든 물고기가 죽었습니다\n");
			exit(0);
		}
		else
		{
			printf("물고기가 아직 살아있습니다.");
		}
		prevElapsedTime = totalElapsedTime;
	}
	

	return 0;
	
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

int checkFishalive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}