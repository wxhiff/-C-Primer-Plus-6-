#include<stdio.h>//输入英寸升高，输出厘米身高
int main(void)
{
	float inch;

	printf("Please enter inch:");
	scanf_s("%f", &inch);
	printf("There are you height:%fcm\n", inch/2.54);

	return 0;
}