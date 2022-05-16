#include<stdio.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	printf("\n\n ======== 아빠는 대머리 게임=========\n\n");
	int answer;// 사용자의 입력값
	int treatment = rand() % 4;//발모제 0~3

	int cntShowBottle = 0;//이번 게임의 병 갯수
	int preCntShowBottle = 0;// 전게임의 병 갯수

	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };//4개의 병
		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == preCntShowBottle);

		int isIncluded = 0; //보여줄 병 중에 발모제가 포함되었는지 여부
		printf("> %d 번째 시도 : ", i);

		//보여줄 병 종류를 선택
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;

			if (bottle[randBottle] == 0) 
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isIncluded = 1;
				}
			}
			else
			{
				j--;
			}
		}

		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
			{ 
				printf("%d ", k + 1);
			}
		}
		printf("물약을 머리에 바릅니다.\n\n");

		if (isIncluded == 1)
		{
			printf(">> 성공 ! 머리가 났어요.\n");
		}
		else
		{
			printf(">> 실패 ! 머리가 나지않았어요.\n");
		}
		printf("\n ....계속하려면 아무키나 누르세요....");
		getchar();
		
	}

	printf("\n\n발모제는 몇번일까요 ? ");
	scanf_s("%d", &answer);
	if (answer == treatment + 1)
	{
		printf("\n >>>> 정답입니다 \n");
	}
	else
	{
		printf("\n >>>> 틀렸습니다. 정답은 %d 입니다 \n", treatment + 1);
	}
	return 0;
}