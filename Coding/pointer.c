#include<stdio.h>
void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);
int main_pointer(void)
{
	//������

	//ö�� 101 -> �޸� ������ �ּ�
	//���� 201
	//�μ� 301
	//�� �� �տ� '��ȣ'�� ����
	//int ö�� = 1; //��ȣ
	//int ���� = 2;
	//int �μ� = 3;

	//printf("ö���� �ּ� : %p ,��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %p ,��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %p ,��ȣ : %d\n", &�μ�, �μ�);

	//int * �̼Ǹ�; // ������ ����
	//�̼Ǹ� = &ö��;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &����;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &�μ�;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	//�̼Ǹ� = &ö��;
	//*�̼Ǹ� = *�̼Ǹ� * 3;
	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &����;
	//*�̼Ǹ� = *�̼Ǹ� * 3;
	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &�μ�;
	//*�̼Ǹ� = *�̼Ǹ� * 3;
	//printf("�̼Ǹ��� ��ȣ�� �ٲ� �� �ּ� : %p, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//
	//int * ������ = �̼Ǹ�;
	//printf("\n ... �����̰� �̼��� ... \n\n");
	//������ = &ö��;
	//*������ = *������ - 2;//ö�� = ö�� - 2
	//printf("�����̰� �湮�ϴ� �� �ּ� : %p , ��ȣ : %d\n", ������, *������);

	//printf("\n ... �����̰� �̼��� ... \n\n");
	//������ = &����;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %p , ��ȣ : %d\n", ������, *������);

	//printf("\n ... �����̰� �̼��� ... \n\n");
	//������ = &�μ�;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %p , ��ȣ : %d\n", ������, *������);

	//printf("\n ... ���� �μ��� �ٲ� ��ȣ�� ���� ��� ...\n\n");

	//printf("ö���� �ּ� : %p ,��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %p ,��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %p ,��ȣ : %d\n", &�μ�, �μ�);

	//printf("�̼Ǹ��� �ּ� : %p\n", &�̼Ǹ�);
	//printf("�������� �ּ� : %p\n", &������);

	//�迭�� ������
	/*int arr[3] = {5, 10, 15};
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 ptr[%d] �� �� : %d\n", i, ptr[i]);
	}

	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		//printf("�迭 arr[%d] �� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d] �� �� : %d\n", i, *(arr + i));
	}
	for (int i = 0; i < 3; i++)
	{
		//printf("�迭 ptr[%d] �� �� : %d\n", i, ptr[i]);
		printf("�迭 ptr[%d] �� �� : %d\n", i, *(ptr + i));
	}
	//arr[i] == *(arr + i)
	//arr === arr �迭�� ù��° ���� �ּҿ� ���� == &arr[0]
	printf("arr ��ü�� �� = %p\n", arr);
	printf("arr[0]�� �ּ� = %p\n", &arr[0]);

	printf("arr ��ü�� ���� ������ �ּ��� ���� �� = %d\n", *arr);
	printf("arr[0]�� ���� �� = %d\n", *&arr[0]);*/

	//swap
	//int a = 10;
	//int b = 20;

	//printf("swap �Լ� �� a:%d , b:%d\n", a, b);
	//swap(a, b);
	//printf("swap �Լ� �� a:%d , b:%d\n", a, b);

	//printf("<�ּҰ� ����>swap �Լ� �� a:%d , b:%d\n", a, b);
	//swap_addr(&a, &b);
	//printf("<�ּҰ� ����>swap �Լ� �� a:%d , b:%d\n", a, b);

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
	printf("swap �Լ� �� a:%d , b:%d\n", a, b);

}
void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("<�ּҰ� ����>swap �Լ� ��  a:%d , b:%d\n", *a, *b);

}
void changeArray(int* ptr)
{
	ptr[2] = 50;
}