#include<stdio.h>//使用嵌套循环按格式打印字符
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