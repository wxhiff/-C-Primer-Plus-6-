#include<stdio.h>//��ӡ������պ�������ʾ������պ�������ĸ���������ֺ����������һ����ĸ����
int main(void)
{
	char lastname[40], firstname[40];
	int lastlong, firstlong;

	printf("Please enter your firsr name:");
	scanf_s("%s", firstname, 40);
	printf("Please enter your last name:");
	scanf_s("%s", lastname, 40);
	lastlong = strlen(lastname);
	firstlong = strlen(firstname);
	printf("%s %s\n", firstname, lastname);
	printf("%*d %*d", firstlong, firstlong, lastlong, lastlong);

	return 0;
}