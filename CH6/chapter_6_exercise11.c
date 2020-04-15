#include<stdio.h>//在数组中存入8个整数，倒序打印出来，代码有问题，虽能出结果。参照练习七的写法。
int main(void)
{
	char num[10];
	int i,j;

	printf("Please enter eight integers:\n");
	for (i = 0; i < 8; i++)
		scanf_s("%d", &num[i]);
	for (j = 7; j >= 0; j--)
		printf("%d ", num[j]);

	return 0;
}