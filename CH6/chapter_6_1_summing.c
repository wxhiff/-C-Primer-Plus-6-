#include<stdio.h>//根据用户输入的整数求和
int main(void)
{
	long num;
	long sum = 0L;
	long status;

	printf("Please enter an integer to be summed");
	printf("(q to  quit):  ");
	status = scanf_s("%ld", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("Pleaae enter next integer (q to quit): ");
		status = scanf_s("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;
}