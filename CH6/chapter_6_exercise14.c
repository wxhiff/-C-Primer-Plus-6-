#include<stdio.h>//两个double类型的数组，
int main(void)
{
	int i;
	double num1[10];
	double num2[10];

	printf("Please enter eight numbers:\n");
	for (i = 0; i < 8; i++)
	{
		scanf_s("%lf", &num1[i]);
		printf("%lf\n", num1[i]);
	}//第一个数组存储输入的值
	for (i = 1,num2[0]=num1[0]; i < 8; i++)
	{
		num2[i] = num2[i-1] + num1[i];
		printf("%lf\n", num2[i]);
	}//第二个数组存储一个对应数组元素累计的值之和

	return 0;
}