#include<stdio.h>//提示用户输入名和姓并打印
int main(void)
{
	char firstname[40];
	char lastname[40];

	printf("Please enter your first name and last name:\n");
	scanf_s("%s", firstname, 40);
	scanf_s("%s", lastname, 40);
	printf("%s %s", firstname, lastname);

	return 0;
}