#include<stdio.h>//打印2的前8次幂。
int main(void)
{
	int i;
	int exp8_2[10];//创建int类型数组

	for (i=1,exp8_2[0] = 1; i < 8; i++)
		exp8_2[i] = 2 * exp8_2[i-1];//循环2的8次幂
	i = 0;
	do
	{
		printf("%d\n", exp8_2[i]);
		i++;
	} while (i < 8);

		return 0;
}