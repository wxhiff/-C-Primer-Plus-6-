#include<stdio.h>//����Ӣ�����ߣ�����������
int main(void)
{
	float inch;

	printf("Please enter inch:");
	scanf_s("%f", &inch);
	printf("There are you height:%fcm\n", inch/2.54);

	return 0;
}