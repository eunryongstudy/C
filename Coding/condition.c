#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main_condition(void){
	/*int age = 4;
	if (age >= 20)
	{
		printf("�����Դϴ�.");
	}
	else if (age >= 17 && age <= 20)
	{
		printf("����л��Դϴ�.");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.");
	}
	else if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.");
	}
	else {
		printf("����Դϴ�.");
	}*/

	//break / continue
	//1~30�ȿ��� 1~5���� ���� ��ǥ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6) 
		{
			printf("������ �л��� ���� ������ \n");
			break;
		}
		printf("%d �� �л� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/
	//1~30 �ȿ��� 6~10���� ���� ��ǥ 7���� �Ἦ
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d �� �л� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}*/
	// && ||
	/*int a = 10;
	int b = 10;
	int c = 12;
	int d = 13;
	if (a == b || c == d)
	{
		printf("a�� b, Ȥ�� c�� d�� �����ϴ�\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�\n");
	}*/
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else {
		printf("�����\n");
	}*/
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i)
	{
	case 0: printf("����\n");break;
	case 1: printf("����\n");break;
	case 2: printf("��\n");break;
	default:printf("�����\n");break;
	}*/
	//Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1;//1~100
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (chance > 0)
	{
		printf("���� ��ȸ : %d \n", chance--);
		printf("���ڸ� ���� ������ (1~100) : ");
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
			printf("�����Դϴ�.! \n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߻��߾�� \n\n");
		}
		if (chance == 0)
		{
			printf("��ȸ�� ��� �����߽��ϴ�. \n\n");
		}
	}
	return 0;
}