#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 10000
int main(void)
{
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c; //��й�ȣ Ű�� *ǥ��

	printf("'����ϱ�'�� ���Ű��� ȯ���մϴ�.\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	//getchar() ���͸� �Է��ؾ� ����
	//getch() Ű �Է½� �ٷ� ����

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13)//enter
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n======��й�ȣ Ȯ����=======\n\n");
	if (strcmp(password, "skehzheld") == 0) //��й�ȣ ��ġ
	{
		printf("==== ��й�ȣ Ȯ�� �Ϸ� ====");
		char* fileName = "C:\\Users\\Eunryong\\Desktop\\C���\\skehzheld.txt";
		FILE* file = fopen(fileName, "a+b"); //������ ������ ���� ������ appen �����߰�
		if (file == NULL)
		{
			printf("���� ���� ����");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n������ ��� �ۼ��ϼ���! ���� �ϽǷ��� EXIT�� �Է��ϼ���\n\n");
		
		while (1)
		{
			scanf("%[^\n]", contents); // �ٹٲ��� ������ ������ �ѹ��徿 ����
			getchar(); //�����Է� FLUSHó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("��� �ϱ� �Է��� �����մϴ�.");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else
	{
		printf("��� ! ��й�ȣ�� Ʋ�Ⱦ��\n\n");
		printf("����!!");
	}

	return 0;
}