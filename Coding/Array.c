#include<stdio.h>
int main(void) 
{
	//�迭
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("����ö 1ȣ���� %d�� Ÿ�� �ֽ��ϴ�.", subway_1);
	printf("����ö 2ȣ���� %d�� Ÿ�� �ֽ��ϴ�.", subway_2);
	printf("����ö 3ȣ���� %d�� Ÿ�� �ֽ��ϴ�.", subway_3);*/

	
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d�� Ÿ�� �ֽ��ϴ�.", i + 1, subway_array[i]);
	}*/
	//�� ���� ���
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*int size = 10;
	int arr[10];*/
	//int arr[10] = { 1, 2 }; //3��° ������ �ڵ����� '0'���� �ʱ�ȭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	//int arr[] = { 1, 2 };
	
	/*float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}*/

	////���ڿ� //���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ����
	//char str[7] = "coding"; // [c][o][d][i][n][g][\0]  
	//printf("%s\n", str);

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "����";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//// ���� 1���ڴ� : 1byte 
	//// �ѱ� 1���ڴ� : 2byte

	//char c_array[10] = { 'c','o','d','i','n','g' };
	///*printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array);i++)
	//{
	//	printf("%c\n", c_array[i]);
	//}*/

	//for (int i = 0; i < sizeof(c_array);i++)
	//{
	//	printf("%d\n", c_array[i]); //ASCII�ڵ� ��� NULL=0
	//}
	//printf("%d\n", 'a');// a�� ������ 97
	//printf("%d\n", 'A');// A�� ������ 65
	//printf("%d\n", '\0');// NULL�� ������ 0
	//printf("%d\n", '0');// 0�� ������ 48
	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ����  %c : %d \n" , i , i);
	}
	return 0;
	return 0;
}