#include<stdio.h>//观察整数上溢，浮点数上、下溢
int main(void)
{
	int a = 4294967296;//四个字节，2的32次方为4294967296
	float b = 0.1234e20;
	b= b / 10;

	printf("整数上溢%d", a);
	printf("浮点数上溢%f", b);

	return 0;
}