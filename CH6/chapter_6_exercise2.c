#include<stdio.h>//ʹ��Ƕ��ѭ������ʽ��ӡ�ַ�
int main(void)
{
	char ch;
	int i, j;

	for (ch = '$', i = 1; i <= 5; i++)
	{
		printf("\n");
		for (j = 0; j < i; j++)
			printf("%c", ch);
	}

	return 0;
}