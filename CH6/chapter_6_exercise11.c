#include<stdio.h>//�������д���8�������������ӡ���������������⣬���ܳ������������ϰ�ߵ�д����
int main(void)
{
	char num[10];
	int i,j;

	printf("Please enter eight integers:\n");
	for (i = 0; i < 8; i++)
		scanf_s("%d", &num[i]);
	for (j = 7; j >= 0; j--)
		printf("%d ", num[j]);

	return 0;
}