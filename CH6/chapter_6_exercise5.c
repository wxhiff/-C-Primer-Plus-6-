#include<stdio.h>//三角形排列打印字母
int main(void)
{
	int row, lum,b;
	char ch,ch1,ch2;

	printf("Please  enter an alphabet:");
	scanf_s("%c", &ch);
	for (row = 0; row < 5; row++)
	{
		for (b = row; b < 4; b++)
			printf(" ");//打印前一部分的空格
			for (ch1 = ch, lum = 0; lum <= row; lum++, ch1++)
				printf("%c", ch1);//打印前一部分 字母
			for (ch2 = ch1 - 2,lum=0; lum < row; lum++, ch2--)//减2是因为++的后缀是先计算再加1，打印出红藕部分的字母
				printf("%c", ch2);
			for (b = row; b < 4; b++)
				printf(" ");//打印后半部分空格
		printf("\n");
	}

	return 0;
}