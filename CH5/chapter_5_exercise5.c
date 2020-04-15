#include<stdio.h>//计算一定的天数里赚多少钱
int main(void)
{
	int count, sum,day;

	printf("Please enter days.\n");
	scanf_s("%d", &day);
	count = 0;
	sum = 0;
	while (count++ < day)
	{
		sum = sum + count;
		printf("sum=%d\n", sum);
	}//求和1到20

	return 0;
}