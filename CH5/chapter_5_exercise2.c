#include<stdio.h>//输入一个整数，打印比这个数字大10的所有整数，包括本身
int main(void)
{
	int num,nnum;

	printf("Please enter a integer:  ");
	scanf_s("%d", &num);
	nnum = num + 10;
	printf("%d\n", num);
	while (num++ < nnum )
	{
		printf("%d\n", num);

	}
	return 0;
}