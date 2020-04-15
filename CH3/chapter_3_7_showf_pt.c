#include<stdio.h>//以两种方式显示float类型的值
int main(void)
{
	float aboat = 32000.0;
	float toobig = 3.4e38*100.0f;
	double abet = 2.14e9;//2.14*10的九次方
	long double dip = 5.32e-5;//5.32*10的负五次方
	printf("%f can be written %e\n", aboat, aboat);
	printf("And it's %a in hexadecima,powers of 2 notation\n", aboat);//16进制的计算要会。
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%e\n", toobig);
	return 0;
}