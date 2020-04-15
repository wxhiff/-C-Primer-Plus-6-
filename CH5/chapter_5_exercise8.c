#include<stdio.h>//求模，将输入的第一个数作为第二个运算对象并保持不变，第二个数作为第一个运算对象。
int main(void)
{
	int fir, sec, mod;
	//char n = '%';

	printf("The program computes moduli.\n");
	printf("Please enter an integer to serve as second operand:  \n");
	scanf_s("%d", &sec);
	printf("Now enter the first operand:\n");
	scanf_s("%d", &fir);
	while (fir > 0)
	{
		mod = fir % sec;
		printf("%d %% %d is %d\n",fir,sec, mod);
		printf("Please enter next first operand.\n");
		scanf_s("%d", &fir);
	}

	return 0;
}