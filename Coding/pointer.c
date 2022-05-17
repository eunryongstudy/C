#include<stdio.h>
void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);
int main_pointer(void)
{
	//포인터

	//철수 101 -> 메모리 공간의 주소
	//영희 201
	//민수 301
	//각 문 앞에 '암호'가 있음
	//int 철수 = 1; //암호
	//int 영희 = 2;
	//int 민수 = 3;

	//printf("철수네 주소 : %p ,암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %p ,암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %p ,암호 : %d\n", &민수, 민수);

	//int * 미션맨; // 포인터 변수
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	//미션맨 = &철수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &영희;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &민수;
	//*미션맨 = *미션맨 * 3;
	//printf("미션맨이 암호를 바꾼 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);
	//
	//int * 스파이 = 미션맨;
	//printf("\n ... 스파이가 미션중 ... \n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2;//철수 = 철수 - 2
	//printf("스파이가 방문하는 곳 주소 : %p , 암호 : %d\n", 스파이, *스파이);

	//printf("\n ... 스파이가 미션중 ... \n\n");
	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %p , 암호 : %d\n", 스파이, *스파이);

	//printf("\n ... 스파이가 미션중 ... \n\n");
	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %p , 암호 : %d\n", 스파이, *스파이);

	//printf("\n ... 영희 민수는 바뀐 암호를 보고 놀람 ...\n\n");

	//printf("철수네 주소 : %p ,암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %p ,암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %p ,암호 : %d\n", &민수, 민수);

	//printf("미션맨의 주소 : %p\n", &미션맨);
	//printf("스파이의 주소 : %p\n", &스파이);

	//배열과 포인터
	/*int arr[3] = {5, 10, 15};
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		//printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		//printf("배열 ptr[%d] 의 값 : %d\n", i, ptr[i]);
		printf("배열 ptr[%d] 의 값 : %d\n", i, *(ptr + i));
	}
	//arr[i] == *(arr + i)
	//arr === arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	printf("arr 자체의 값 = %p\n", arr);
	printf("arr[0]의 주소 = %p\n", &arr[0]);

	printf("arr 자체의 값이 가지는 주소의 실제 값 = %d\n", *arr);
	printf("arr[0]의 실제 값 = %d\n", *&arr[0]);*/

	//swap
	//int a = 10;
	//int b = 20;

	//printf("swap 함수 전 a:%d , b:%d\n", a, b);
	//swap(a, b);
	//printf("swap 함수 후 a:%d , b:%d\n", a, b);

	//printf("<주소값 전달>swap 함수 전 a:%d , b:%d\n", a, b);
	//swap_addr(&a, &b);
	//printf("<주소값 전달>swap 함수 후 a:%d , b:%d\n", a, b);

	int arr2[3] = { 10, 20, 30 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}



	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("swap 함수 안 a:%d , b:%d\n", a, b);

}
void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("<주소값 전달>swap 함수 안  a:%d , b:%d\n", *a, *b);

}
void changeArray(int* ptr)
{
	ptr[2] = 50;
}