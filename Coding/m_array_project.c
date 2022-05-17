#include<stdio.h>
#include<time.h>

int arrayAnimal[4][5]; // 카드 지도 (20장)
int checkAnimal[4][5]; // 뒤집힌 카드 확인
char* strAnimal[10];

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printfAnimal();
void printfQuestion();
int foundAllAnimals();


int main(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCount = 0;

	while (1)
	{
		int select1 = 0;
		int select2 = 0;

		printfAnimal();
		printfQuestion();
		printf("카드를 2개 고르세요 :");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// 정수좌표를 (x,y)로 변환
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if ( (checkAnimal[firstSelect_x][firstSelect_y] == 0//카드가 뒤집혔는지 않았는지
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0)

			&&
			(arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y])
			)
			//두 동물이 같은지 
		{
			printf("\n\n 빙고! %s 발견 \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n 땡 (틀렸거나 이미 뒤집힌 카드입니다) \n\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals == 1)
		{
			printf("\n\n 축하합니다 ! 모든 카드를 맞췄습니다\n\n");
			printf("총 실패 횟수 : %d\n\n", failCount);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "개";
	strAnimal[1] = "고양이";
	strAnimal[2] = "원숭이";
	strAnimal[3] = "토끼";
	strAnimal[4] = "돼지";
	strAnimal[5] = "소";
	strAnimal[6] = "닭";
	strAnimal[7] = "말";
	strAnimal[8] = "사자";
	strAnimal[9] = "독수리";
}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20;

		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
	return 0;
}

int conv_pos_x(int x)
{
	return x / 5;
}
int conv_pos_y(int y)
{
	return y % 5; //y를 5로 나눈 나머지값
}

void printfAnimal()
{
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n==============================\n\n");
}

void printfQuestion()
{
	printf("\n\n<문제>\n");
	int seq = 0;
	
	for (int i = 0;i < 4;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else
			{
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0;i < 4; i++)
	{
		for (int j = 0;j < 5;j++)
		{
			if (checkAnimal[i][j] == 0)
				return 0;
		}
	}
	return 1;
}