#include<stdio.h>//求无限序列的和，一个是调和级数，发散，一个是交错调和级数，收敛于ln(2)。
int main(void)
{
	int i,cycle_index,j=0,exp=-1;
	float sum_positive, sum_negative;

	printf("Please enter cycle-index:\n");
	scanf_s("%d", &cycle_index);
	for (sum_positive = 0, i = 1; i <= cycle_index; i++)
	sum_positive = sum_positive + 1.0 / i;
	for (sum_negative = 0, i = 1; i <= cycle_index; i++)
	{
		for (; j < i; j++)
			exp = (-1)*exp;
		sum_negative = sum_negative + exp * (1.0 / i);
	}//交错调和级数
	printf("%f  %f", sum_positive,sum_negative);

	return 0;
}