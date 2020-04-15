#include<stdio.h>//使用转义字符示例
int main1(void)
{
	float salary;

	printf("\aEnter your desired monthly salary:");
	printf("$__________\b\b\b\b\b\b\b");
	scanf_s("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary,salary*12.0);
	printf("\rGee!\n");

	return 0;
}