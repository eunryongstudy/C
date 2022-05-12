#include<stdio.h>

int main(void) {
	/*printf("Hello  World\n");
	printf("Hello  World\n");
	printf("Hello  World\n");
	printf("Hello  World\n");
	printf("Hello  World\n");*/
	
	/*++
	int a = 10;
	printf("a= %d\n", a);
	a++;
	printf("a= %d\n", a);
	a++;
	printf("a= %d\n", a);*/

	/*
	int b = 20;
	printf("b = %d\n", ++b);
	printf("b = %d\n", b++);
	printf("b = %d\n", b);*/

	//int i = 1;
	//printf("Hello World %d\n", i++); //1
	//printf("Hello World %d\n", i++); //2
	//printf("Hello World %d\n", i++); //3
	//printf("Hello World %d\n", i++); //4
	//printf("Hello World %d\n", i++); //5

	//반복문
	//for,while,do while

	//for (선언; 조건; 증감)
	/*for (int i = 1;i <=10; i++)
	{
		printf("Hello World %d\n", i);
	}*/
	//while(조건){   }
	//int i = 1;
	//while (i<=10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}

	//do { } while (조건);
	/*int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);*/
	//2중 반복문
	/*for (int i = 1; i <= 4; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++)
		{
			printf("	두 번째 반복문 : %d\n", j);
		}
	}*/
	for (int i = 2; i <= 9; i++) {
		printf("%d단 계산 \n", i);
		for (int j = 1; j <= 9; j++) {
			printf("  %d x %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}