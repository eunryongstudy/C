#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define MAX 10000
int main(void)
{
	char line[MAX];
	char contents[MAX];
	char password[20];
	char c; //비밀번호 키값 *표시

	printf("'비밀일기'에 오신것을 환영합니다.\n");
	printf("비밀번호를 입력하세요 : ");

	//getchar() 엔터를 입력해야 동작
	//getch() 키 입력시 바로 동작

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

	printf("\n\n======비밀번호 확인중=======\n\n");
	if (strcmp(password, "skehzheld") == 0) //비밀번호 일치
	{
		printf("==== 비밀번호 확인 완료 ====");
		char* fileName = "C:\\Users\\Eunryong\\Desktop\\C언어\\skehzheld.txt";
		FILE* file = fopen(fileName, "a+b"); //파일이 없으면 생성 있으면 appen 내용추가
		if (file == NULL)
		{
			printf("파일 열기 실패");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}
		printf("\n\n내용을 계속 작성하세요! 종료 하실려면 EXIT를 입력하세요\n\n");
		
		while (1)
		{
			scanf("%[^\n]", contents); // 줄바꿈이 나오기 전까지 한문장씩 저장
			getchar(); //엔터입력 FLUSH처리

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("비밀 일기 입력을 종료합니다.");
				break;
			}
			fputs(contents, file);
			fputs("\n", file);
		}
		fclose(file);
	}
	else
	{
		printf("경고 ! 비밀번호가 틀렸어요\n\n");
		printf("나가!!");
	}

	return 0;
}