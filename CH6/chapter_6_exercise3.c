#include<stdio.h>
int main(void)
{
	int row, lum;
	char ch;

	for (row = 0, ch = 'F'; row < 6; row++)
	{
		for (lum = 0,ch='F'; lum <=row; lum++,ch--)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}