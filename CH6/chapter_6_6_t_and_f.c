#include<stdio.h>//真和假的值
int main(void)
{
	int true_vaul, false_vaul;

	true_vaul = (10 > 2);
	false_vaul=(10 == 2);
	printf("true=%d;false=%d\n", true_vaul, false_vaul);

	return 0;
}