#include<stdio.h>//��ʾ�û��������ֲ��ò�ͬ�ķ�ʽ��ӡ
int main(void)
{
	char name[40];
	int width;

	printf("Please enter your name:\n");
	scanf_s("%s", name, 40);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	width = strlen(name) + 3;
	printf("\"%*s\"\n",width,name);

	return 0;
}