#include<stdio.h>
#include<math.h>
int main(void)
{
	const double ANSWER = 3.1415926;
	double response;

	printf("What is the value of pi?\n");
	scanf_s("%lf", &response);
	while (fabs(response - ANSWER > 0.0001));
	{
		printf("Try again!\n");
		scanf_s("%lf", &response);
	}
	printf("Close enough!\n");

		return 0;
}