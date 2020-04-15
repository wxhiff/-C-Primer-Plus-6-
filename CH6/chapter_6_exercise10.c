#include<stdio.h>
int main(void)
{
	int up_limit, low_limit,square_add;

	printf("Please enter upper and lower limit:\n");
	scanf_s("%d %d", &up_limit, &low_limit);
	while (up_limit >low_limit)
	{
		for (square_add = 0; low_limit <= up_limit; low_limit++)
			square_add = square_add + low_limit * low_limit;
		printf("%d\n", square_add);
		printf("Enter next two number:\n");
		scanf_s("%d %d", &up_limit, &low_limit);
	}

	return 0;
}