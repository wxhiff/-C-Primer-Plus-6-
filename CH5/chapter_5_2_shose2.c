#include<stdio.h>//计算不同鞋码对应的脚长，第一次接触循环语句
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("Shoe size (men's)    foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)//while循环语句开始
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}//块结束
	printf("If the shoe fits,wear it\n");

	return 0;
}