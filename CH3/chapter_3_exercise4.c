#include<stdio.h>//��ӡ�������Ĳ�ͬ��ʽ
int main(void)
{
	float a;

	printf("Enter s float_point value:");
	scanf_s("%f", &a);
	printf("fixed_point notation:%f\n", a);
	printf("exponential notation:%le\n", a);
	printf("p notation:%lx\n", a);

	return 0;
}