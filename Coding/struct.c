#include<stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
};

int main(void)
{
	


	//char* name2 = "은룡2회사";
	//int year2 = 2023;
	//int price2 = 300;
	//char* company2 = "은룡2회사";


	struct GameInfo gameInfo1;
	gameInfo1.name = "은룡게임";
	gameInfo1.year = 1995;
	gameInfo1.price = 500;
	gameInfo1.company = "은룡회사";

	printf("-- 게임 출시 정보--\n");
	printf("  게임명 : %s\n", gameInfo1.name);
	printf("  출시연도 : %d\n", gameInfo1.year);
	printf("  가격 : %d\n", gameInfo1.price);
	printf("  제작사 : %s\n", gameInfo1.company);

	struct GameInfo gameInfo2 = { "은룡게임2", 1996, 300, "은룡회사" };
	printf("-- 다른 게임 출시 정보--\n");
	printf("  게임명 : %s\n", gameInfo2.name);
	printf("  출시연도 : %d\n", gameInfo2.year);
	printf("  가격 : %d\n", gameInfo2.price);
	printf("  제작사 : %s\n", gameInfo2.company);

	struct GameInfo gameArray[2] = {
		{ "은룡게임", 1995, 500, "은룡회사" } ,
		{ "은룡게임2", 1996, 300, "은룡회사" }
	};
	
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("-- 포인터 게임 출시 정보--\n");
	/*printf("  게임명 : %s\n", (* gamePtr).name);
	printf("  출시연도 : %d\n", (*gamePtr).year);
	printf("  가격 : %d\n", (*gamePtr).price);
	printf("  제작사 : %s\n", (*gamePtr).company);*/
	printf("  게임명 : %s\n", gamePtr->name);
	printf("  출시연도 : %d\n", gamePtr->year);
	printf("  가격 : %d\n", gamePtr->price);
	printf("  제작사 : %s\n", gamePtr->company);

	gameInfo1.friendGame = &gameInfo2;
	printf("-- 연관 게임 출시 정보--\n");
	printf("  게임명 : %s\n", gameInfo1.friendGame->name);
	printf("  출시연도 : %d\n", gameInfo1.friendGame->year);
	printf("  가격 : %d\n", gameInfo1.friendGame->price);
	printf("  제작사 : %s\n", gameInfo1.friendGame->company);

	return 0;
}