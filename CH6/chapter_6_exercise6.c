#include<stdio.h>//用户输入平方表和立方表的上下限，并打印它
int main(void)
{
	int ceiling, lower_limit,length;

	printf("Please enter the lable of ceiling and lower limit which compute square and cube.\n");
	printf("Now enter ceiling:\n");
	scanf_s("%d", &ceiling);
	printf("Next enter lower limit:\n");
	scanf_s("%d", &lower_limit);
	length = lower_limit - ceiling;
	printf("number  square  cube\n");
	for (; ceiling <= lower_limit; ceiling++)
	{
		printf("%d       %d     %d\n", ceiling, ceiling*ceiling, ceiling*ceiling*ceiling);
	}

	return 0;
}