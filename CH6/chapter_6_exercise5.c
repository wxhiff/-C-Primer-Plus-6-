#include<stdio.h>//���������д�ӡ��ĸ
int main(void)
{
	int row, lum,b;
	char ch,ch1,ch2;

	printf("Please  enter an alphabet:");
	scanf_s("%c", &ch);
	for (row = 0; row < 5; row++)
	{
		for (b = row; b < 4; b++)
			printf(" ");//��ӡǰһ���ֵĿո�
			for (ch1 = ch, lum = 0; lum <= row; lum++, ch1++)
				printf("%c", ch1);//��ӡǰһ���� ��ĸ
			for (ch2 = ch1 - 2,lum=0; lum < row; lum++, ch2--)//��2����Ϊ++�ĺ�׺���ȼ����ټ�1����ӡ����ź���ֵ���ĸ
				printf("%c", ch2);
			for (b = row; b < 4; b++)
				printf(" ");//��ӡ��벿�ֿո�
		printf("\n");
	}

	return 0;
}