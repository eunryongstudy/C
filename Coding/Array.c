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

	
	int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명 타고 있습니다.", i + 1, subway_array[i]);
	}
	return 0;
}