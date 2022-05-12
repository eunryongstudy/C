#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_ran(void)
{
	//srand(time(NULL)); //난수 초기화
	//int rum = rand() % 3 + 1;//1~3
	//printf("%d", rum);
	printf("난수 초기화 전.. \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	srand(time(NULL));
	printf("\n\n 난수 초기화 후.. \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	return 0;
}