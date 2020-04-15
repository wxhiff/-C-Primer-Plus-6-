#include<stdio.h>//打印计算的数字，直到用户输入非数字字符为止
int main(void)
{
	float num1, num2,con,status;

	printf("Please enter two float number.\n");
	printf("Now,enter first:\n");
	status=scanf_s("%f", &num1);
	printf("Next number:\n");
	scanf_s("%f", &num2);
	while (status== 1)
	{
		con =(num1 - num2) /(num1*num2);
		printf("%.4f\n", con);
		printf("If you finish entering the number,please enter q to quit,otherwise continue.\n");
		printf("Please enter two float number.\n");
		printf("Now,enter first:\n");
		status=scanf_s("%f", &num1);
		printf("Next number:\n");
		scanf_s("%f", &num2);
	}

	return 0;
}