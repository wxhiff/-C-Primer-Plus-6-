#include<stdio.h>//�������е�����������ĵ�����������ת����
#define L 3.785
#define K 1.609
int main(void)
{
	float mileage, gasconsumption;

	printf("Please enter your mileage and gas consumption:");
	scanf_s("%f %f", &mileage, &gasconsumption);
	printf("You consum %f gas per meileage.\n", gasconsumption / mileage);
	printf("%.1f", (gasconsumption*L) / (mileage*K));

	return 0;
}