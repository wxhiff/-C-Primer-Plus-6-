#include<stdio.h>//��ʾ�������
int main(void)
{
	float a, b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;//λ������
	printf("%f \n", a);
	return 0;
}