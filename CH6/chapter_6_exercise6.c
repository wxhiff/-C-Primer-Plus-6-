#include<stdio.h>//�û�����ƽ�����������������ޣ�����ӡ��
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