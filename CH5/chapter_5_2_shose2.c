#include<stdio.h>//���㲻ͬЬ���Ӧ�Ľų�����һ�νӴ�ѭ�����
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's)    foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)//whileѭ����俪ʼ
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}//�����
	printf("If the shoe fits,wear it\n");

	return 0;
}