#include<stdio.h>
#include<time.h>
int main(void)
{
	srand(time(NULL));
	printf("\n\n ======== �ƺ��� ��Ӹ� ����=========\n\n");
	int answer;// ������� �Է°�
	int treatment = rand() % 4;//�߸��� 0~3

	int cntShowBottle = 0;//�̹� ������ �� ����
	int preCntShowBottle = 0;// �������� �� ����

	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };//4���� ��
		do {
			cntShowBottle = rand() % 2 + 2;
		} while (cntShowBottle == preCntShowBottle);

		int isIncluded = 0; //������ �� �߿� �߸����� ���ԵǾ����� ����
		printf("> %d ��° �õ� : ", i);

		//������ �� ������ ����
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
		printf("������ �Ӹ��� �ٸ��ϴ�.\n\n");

		if (isIncluded == 1)
		{
			printf(">> ���� ! �Ӹ��� �����.\n");
		}
		else
		{
			printf(">> ���� ! �Ӹ��� �����ʾҾ��.\n");
		}
		printf("\n ....����Ϸ��� �ƹ�Ű�� ��������....");
		getchar();
		
	}

	printf("\n\n�߸����� ����ϱ�� ? ");
	scanf_s("%d", &answer);
	if (answer == treatment + 1)
	{
		printf("\n >>>> �����Դϴ� \n");
	}
	else
	{
		printf("\n >>>> Ʋ�Ƚ��ϴ�. ������ %d �Դϴ� \n", treatment + 1);
	}
	return 0;
}