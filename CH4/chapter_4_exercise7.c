#include <stdio.h>//��dounle��float��������Ϊ1.0/3.0���ò�ͬλ����ʾ���۲���
#include<float.h>
int main(void)
{
	double exercise7_1=1.0/3.0;
	float exercise7_2 = 1.0 / 3.0;

	printf("%.6Lf %.12Lf %16.Lf\n", exercise7_1, exercise7_1, exercise7_1);
	printf("%.6f %.12f %.16f", exercise7_2, exercise7_2, exercise7_2);

	return 0;
}