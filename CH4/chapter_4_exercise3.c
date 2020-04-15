#include<stdio.h>;//浮点数不同的打印方法
int main(void)
{
	float num;

	printf("Please enter a number:\n");
	scanf_s("%f", &num);
	printf("%f %ef\n", num, num);
	printf("+%f,%ef", num, num);

	return 0;
}