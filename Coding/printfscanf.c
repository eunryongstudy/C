#include<stdio.h>
int main(void)
{
	//������ ����
	/*int age = 28;
	printf("%d\n", age);
	age = 14;
	printf("%d\n", age);*/

	//�Ǽ��� ����
	/*float f = 68.5f;
	printf("%.3f\n", f);
	double d = 55.53;
	printf("%.2lf\n", d);*/

	//���
	/*const int YEAR = 1995;
	printf("�¾ �⵵ : %d\n", YEAR);*/

	//����
	/*int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);*/

	//scanf
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	//���� , ���ڿ�
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	//������Ʈ
	//�����ۼ�
	//�̸�? ����? ������? ����?

	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));
	
	int age;
	printf("��쿡��?");
	scanf_s("%d", &age);

	char live[256];
	printf("��� �缼��? ");
	scanf_s("%s", live, sizeof(live));

	char job[256];
	printf("������ ������? ");
	scanf_s("%s", job, sizeof(job));

	// ���
	printf("\n\n---- �Ż� ����----\n\n");
	printf(" �̸�        : %s\n", name);
	printf(" ����        : %d\n", age);
	printf(" ������      : %s\n", live);
	printf(" ����        : %s\n", job);

	return 0;
}