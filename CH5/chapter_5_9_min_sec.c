#include<stdio.h>//将秒转换为分钟和秒
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<=to quit):\n");//退出循环的条件
	scanf_s("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;//取分钟数
		left = sec % SEC_PER_MIN;//取秒数
		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);//输出
		printf("Enter next value(<= to quit):\n");
		scanf_s("%d",&sec);
	}
	printf("Done!\n");

	int a=11, b=-5;

	printf("%d", a %b);

	return 0;
}