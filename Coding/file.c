#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 10000

int main_file(void)
{
	
	char line[MAX];
	//파일 작성하기
	//FILE* file = fopen("C:\\Users\\Eunryong\\Desktop\\C언어\\test1.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용해서 글을 적어볼게요\n", file);
	//fputs("잘 적히는지 확인해주세요\n", file);

	//fclose(file);

	/*FILE* file = fopen("C:\\Users\\Eunryong\\Desktop\\C언어\\test1.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}

	while (fgets(line, MAX, file) != NULL)
	{
		printf("%s", line);
	}

	fclose(file);*/

	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;
	char str1[MAX];
	char str2[MAX];

	//파일 쓰기
	/*FILE* file = fopen("C:\\Users\\Eunryong\\Desktop\\C언어\\test2.txt", "wb");
	if (file == NULL)
	{
		printf("파일 열기 실패");
		return 1;

	}

	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d \n", "보너스번호", 7);*/

	//파일읽기
	FILE* file = fopen("C:\\Users\\Eunryong\\Desktop\\C언어\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패");
		return 1;

	}

	fscanf(file, "%s %d %d %d %d %d %d", str1,
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);

	fclose(file);

	return 0;
}