#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void)
{
	


	//char* name2 = "����2ȸ��";
	//int year2 = 2023;
	//int price2 = 300;
	//char* company2 = "����2ȸ��";


	struct GameInfo gameInfo1;
	gameInfo1.name = "�������";
	gameInfo1.year = 1995;
	gameInfo1.price = 500;
	gameInfo1.company = "����ȸ��";

	printf("-- ���� ��� ����--\n");
	printf("  ���Ӹ� : %s\n", gameInfo1.name);
	printf("  ��ÿ��� : %d\n", gameInfo1.year);
	printf("  ���� : %d\n", gameInfo1.price);
	printf("  ���ۻ� : %s\n", gameInfo1.company);

	struct GameInfo gameInfo2 = { "�������2", 1996, 300, "����ȸ��" };
	printf("-- �ٸ� ���� ��� ����--\n");
	printf("  ���Ӹ� : %s\n", gameInfo2.name);
	printf("  ��ÿ��� : %d\n", gameInfo2.year);
	printf("  ���� : %d\n", gameInfo2.price);
	printf("  ���ۻ� : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{ "�������", 1995, 500, "����ȸ��" } ,
		{ "�������2", 1996, 300, "����ȸ��" }
	};
	return 0;
}