#include<stdio.h>
#include<time.h>

int arrayAnimal[4][5]; // ī�� ���� (20��)
int checkAnimal[4][5]; // ������ ī�� Ȯ��
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
		printf("ī�带 2�� ������ :");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2)
			continue;

		// ������ǥ�� (x,y)�� ��ȯ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		if ( (checkAnimal[firstSelect_x][firstSelect_y] == 0//ī�尡 ���������� �ʾҴ���
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0)

			&&
			(arrayAnimal[firstSelect_x][firstSelect_y]
			== arrayAnimal[secondSelect_x][secondSelect_y])
			)
			//�� ������ ������ 
		{
			printf("\n\n ����! %s �߰� \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		else
		{
			printf("\n\n �� (Ʋ�Ȱų� �̹� ������ ī���Դϴ�) \n\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals == 1)
		{
			printf("\n\n �����մϴ� ! ��� ī�带 ������ϴ�\n\n");
			printf("�� ���� Ƚ�� : %d\n\n", failCount);
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
	strAnimal[0] = "��";
	strAnimal[1] = "�����";
	strAnimal[2] = "������";
	strAnimal[3] = "�䳢";
	strAnimal[4] = "����";
	strAnimal[5] = "��";
	strAnimal[6] = "��";
	strAnimal[7] = "��";
	strAnimal[8] = "����";
	strAnimal[9] = "������";
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
	return y % 5; //y�� 5�� ���� ��������
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
	printf("\n\n<����>\n");
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