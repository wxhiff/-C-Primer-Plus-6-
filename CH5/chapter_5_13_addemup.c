#include<stdio.h>//几种常见语句演示
int main(void)
{
	int count, sum;

	count = 0;
	sum = 0;
	while (count++ < 20)
	{
		sum = sum + count;
		printf("sum=%d\n", sum);
	}//求和1到20

	return 0;
}