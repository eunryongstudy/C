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
	long startTime = 0;//���۽ð�
	long totalElapsedTime = 0;//�� ����ð�
	long prevElapsedTime = 0;// ���� ����ð�

	int num; //�� �� ���׿� ���� �ִ���
	initData();

	cursor = arrayFish;

	startTime = clock();// ����ð��� 1000���� 1��(millsecond)���� ��ȯ
	while(1)
	{
		printfFishes();
		printf("�� �� ���׿� ���� �ֽðڽ��ϱ�?");
		scanf_s("%d", &num);
		getchar();
		//�Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("�Է� ���� �߸� �Ǿ����ϴ�.");
			continue;

		}

		//�� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld �� \n", totalElapsedTime);

		//���� �� �� �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf(" �ֱ� ��� �ð� : %ld �� \n", prevElapsedTime);
		
		//������ �� ����
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] < 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�... \n", num);
		}
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d�� ���׿� ���� �ݴϴ�.", num);
			cursor[num - 1] += 1;
		}

		// 20�ʸ��� ������
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" === �� ������! ������ %d���� %d�� �ö����ϴ�.\n\n", level - 1, level);

			if (level == 5)
			{
				printf(" �����մϴ� �ְ����� �����߽��ϴ�. ������ �����մϴ�. \n");
				exit(0);
			}
		}

		//��� ����Ⱑ �׾����� Ȯ��
		if (checkFishalive == 0)
		{
			//����� ��� ���
			printf("��� ����Ⱑ �׾����ϴ�\n");
			exit(0);
		}
		else
		{
			printf("����Ⱑ ���� ����ֽ��ϴ�.");
		}
		prevElapsedTime = totalElapsedTime;
	}
	

	return 0;
	
}

void initData()
{
	level = 1;// ���ӷ���
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;//������ �� ����
	}
}
void printfFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3�� ���̵� ������
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