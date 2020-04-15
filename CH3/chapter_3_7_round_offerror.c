#include<stdio.h>//演示舍入误差
int main(void)
{
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;//位数不够
	printf("%f \n", a);
	return 0;
}