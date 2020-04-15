#include<stdio.h>//打印大写字母，嵌套循环的简单例子
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