#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};

typedef struct GameInfomatin {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO; 

int main_struct(void)
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
	
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("-- ������ ���� ��� ����--\n");
	/*printf("  ���Ӹ� : %s\n", (* gamePtr).name);
	printf("  ��ÿ��� : %d\n", (*gamePtr).year);
	printf("  ���� : %d\n", (*gamePtr).price);
	printf("  ���ۻ� : %s\n", (*gamePtr).company);*/
	printf("  ���Ӹ� : %s\n", gamePtr->name);
	printf("  ��ÿ��� : %d\n", gamePtr->year);
	printf("  ���� : %d\n", gamePtr->price);
	printf("  ���ۻ� : %s\n", gamePtr->company);

	gameInfo1.friendGame = &gameInfo2;
	printf("-- ���� ���� ��� ����--\n");
	printf("  ���Ӹ� : %s\n", gameInfo1.friendGame->name);
	printf("  ��ÿ��� : %d\n", gameInfo1.friendGame->year);
	printf("  ���� : %d\n", gameInfo1.friendGame->price);
	printf("  ���ۻ� : %s\n", gameInfo1.friendGame->company);


	//typedef
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3;
	�Ǽ� �Ǽ����� = 3.23f;
	printf("\n\n�������� = %d �Ǽ����� = %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 1997;
	game1.price = 600;
	game1.company = "�ѱ�ȸ��";

	GAME_INFO game2;
	game2.name = "�������";
	game2.year = 1994;
	game2.price = 700;
	game2.company = "����ȸ��";
	return 0;
}