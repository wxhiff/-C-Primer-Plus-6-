#include<stdio.h>//一些浮点型修饰符的组合
int main(void)
{
	const double RENT = 3852.99;//const变量，为只读模式
	
	printf("*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f\n*", RENT);
	printf("*%3.1f\n*", RENT);
	printf("*%10.3f\n*", RENT);//10是字段数，.后面的数字指定小数的位数，前面的数指定字段数
	printf("*%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);

	return 0;
}