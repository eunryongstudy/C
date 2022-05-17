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
	}
	

	return 0;
	getchar();
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