#include<stdio.h>//用户输入天数，转换为周数和天数
#define DAY_PER_WEEK 7
int main(void)
{
	int day,week,days;

	printf("The program will stop when you enter a negative.\n");
	printf("Please enter days\n");
	scanf_s("%d", &day);
	while (day > 0)
	{
		week = day / DAY_PER_WEEK;
		days = day % DAY_PER_WEEK;
		printf("%d days are %d weeks and %d days\n", day, week, days);
		printf("Enter next:\n");
		scanf_s("%d", &day);
	}

	return 0;
}