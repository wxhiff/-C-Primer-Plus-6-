#include<stdio.h>//�����ַ�ʽ��ʾfloat���͵�ֵ
int main(void)
{
	float aboat = 32000.0;
	float toobig = 3.4e38*100.0f;
	double abet = 2.14e9;//2.14*10�ľŴη�
	long double dip = 5.32e-5;//5.32*10�ĸ���η�
	printf("%f can be written %e\n", aboat, aboat);
	printf("And it's %a in hexadecima,powers of 2 notation\n", aboat);//16���Ƶļ���Ҫ�ᡣ
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);
	printf("%e\n", toobig);
	return 0;
}