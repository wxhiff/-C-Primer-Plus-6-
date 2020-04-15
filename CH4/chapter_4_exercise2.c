#include<stdio.h>//提示用户输入名字并用不同的方式打印
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