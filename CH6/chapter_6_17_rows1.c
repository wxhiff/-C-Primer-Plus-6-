#include<stdio.h>//��ӡ��д��ĸ��Ƕ��ѭ���ļ�����
#define ROWS 6
#define CHARS 10
int main(void)
{
	int row;
	int ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}