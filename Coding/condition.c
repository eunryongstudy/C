#include<stdio.h>
int main(void){
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
	for (int i = 1; i <= 30; i++)
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
	}
	return 0;
}