#include<stdio.h>//���������еĺͣ�һ���ǵ��ͼ�������ɢ��һ���ǽ�����ͼ�����������ln(2)��
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
	}//������ͼ���
	printf("%f  %f", sum_positive,sum_negative);

	return 0;
}