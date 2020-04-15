#include<stdio.h>//do while语句，出口条件循环。
int main(void)
{
	const int secert_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secert code number: ");
		scanf_s("%d", &code_entered);
	} while (code_entered != secert_code);
	printf("Congratulations!You are cured!\n");

	return 0;
}