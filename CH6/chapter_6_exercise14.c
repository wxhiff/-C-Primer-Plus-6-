#include<stdio.h>//����double���͵����飬
int main(void)
{
	int i;
	double num1[10];
	double num2[10];

	printf("Please enter eight numbers:\n");
	for (i = 0; i < 8; i++)
	{
		scanf_s("%lf", &num1[i]);
		printf("%lf\n", num1[i]);
	}//��һ������洢�����ֵ
	for (i = 1,num2[0]=num1[0]; i < 8; i++)
	{
		num2[i] = num2[i-1] + num1[i];
		printf("%lf\n", num2[i]);
	}//�ڶ�������洢һ����Ӧ����Ԫ���ۼƵ�ֵ֮��

	return 0;
}