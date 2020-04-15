#include<stdio.h>//求立方，自己建立一个函数。
void tribule(int n);
int main(void)
{
	int num;

	printf("Please enter a number.\n");
	scanf_s("%d", &num);
	tribule(num);
	return 0;
}

void tribule(int num)
{
	int n;
n = num * num*num;
printf("%d", n);
}