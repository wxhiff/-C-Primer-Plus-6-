#include<stdio.h>//scanf_s()函数中*修饰符的使用示例
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n",n);

	return 0;
}//其结果为跳过输入中的前两个整数