#include<stdio.h>
int main(void)
{
	int row, lum;
	char ch;

	for (row = 0, ch = 'A'; row < 6; row++)
	{
		for (lum = 0; lum <= row; lum++, ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}