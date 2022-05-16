#include<stdio.h>
int main(void) 
{
	//배열
	/*int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;

	printf("지하철 1호차에 %d명 타고 있습니다.", subway_1);
	printf("지하철 2호차에 %d명 타고 있습니다.", subway_2);
	printf("지하철 3호차에 %d명 타고 있습니다.", subway_3);*/

	
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명 타고 있습니다.", i + 1, subway_array[i]);
	}*/
	//값 설정 방법
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	/*int size = 10;
	int arr[10];*/
	//int arr[10] = { 1, 2 }; //3번째 값부터 자동으로 '0'으로 초기화됨
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

	////문자열 //문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야함
	//char str[7] = "coding"; // [c][o][d][i][n][g][\0]  
	//printf("%s\n", str);

	//char str[] = "coding";
	///*printf("%s\n", str);
	//printf("%d\n", sizeof(str));*/
	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n", str[i]);
	//}

	//char kor[] = "은룡";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));
	//// 영어 1글자당 : 1byte 
	//// 한글 1글자당 : 2byte

	//char c_array[10] = { 'c','o','d','i','n','g' };
	///*printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array);i++)
	//{
	//	printf("%c\n", c_array[i]);
	//}*/

	//for (int i = 0; i < sizeof(c_array);i++)
	//{
	//	printf("%d\n", c_array[i]); //ASCII코드 출력 NULL=0
	//}
	//printf("%d\n", 'a');// a의 정수형 97
	//printf("%d\n", 'A');// A의 정수형 65
	//printf("%d\n", '\0');// NULL의 정수형 0
	//printf("%d\n", '0');// 0의 정수형 48
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수  %c : %d \n" , i , i);
	}
	return 0;
	return 0;
}