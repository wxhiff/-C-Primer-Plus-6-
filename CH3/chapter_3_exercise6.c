#include<stdio.h>//����ˮ�Ŀ���������ʾˮ������
int main(void)
{
	float water,atom,g,quantity;
	atom = 3e-23;
	g = 950;
	water = g / atom;

	printf("Please enter your quantities of water:");
	scanf_s("%f", &quantity);
	printf("There are the number of atom in water:%le\n", water*quantity);

	return 0;
}