#include<stdio.h>//����һ������26����ĸ�����鲢��ӡ������
int main(void)
{
	int letter_26[26],i,j;

	for (letter_26[0] = 'a', i = 0; i < 26; i++)
		letter_26[i] = letter_26[0] + i;
	for (j = 0; j < 26; j++)
		printf("%c", letter_26[j]);

	return 0;
}