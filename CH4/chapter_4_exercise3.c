#include<stdio.h>;//��������ͬ�Ĵ�ӡ����
int main(void)
{
	float num;

	printf("Please enter a number:\n");
	scanf_s("%f", &num);
	printf("%f %ef\n", num, num);
	printf("+%f,%ef", num, num);

	return 0;
}