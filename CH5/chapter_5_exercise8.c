#include<stdio.h>//��ģ��������ĵ�һ������Ϊ�ڶ���������󲢱��ֲ��䣬�ڶ�������Ϊ��һ���������
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