#include<stdio.h>//����һ����������׬����Ǯ
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
	}//���1��20

	return 0;
}