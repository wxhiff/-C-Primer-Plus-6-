#include<stdio.h>//������ת������
int main(void)
{
	int age;

	printf("Please enter your age:");
	scanf_s("%d", &age);
	printf("There are you age translating into seconds:%le\n", 3.156e7*age);

	return 0;
}