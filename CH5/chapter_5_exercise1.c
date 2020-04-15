#include<stdio.h>//将输入的分钟数转换成小时加分钟的表示形式
#define H_PER_MIN 60
int main(void)
{
	int hour, min,mmin;

	printf("Entering minutes converts to hours and minutes.\n ");
	printf("The program will stop when you enter negative number or zero.\n");
	printf("Please enter minutes:\n");
	scanf_s("%d", &min);
	while (min > 0)
	{
		hour = min / H_PER_MIN;
		mmin = min % H_PER_MIN;
		printf("%d minutes converts to %d hours and %d minutes.\n", min, hour, mmin);
		printf("Please enter next:\n");
		scanf_s("%d", &min);
	}
	printf("That's all!");

	return 0;
}