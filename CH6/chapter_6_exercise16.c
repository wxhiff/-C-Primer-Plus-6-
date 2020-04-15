#include<stdio.h>

int main(void)
{
	float Da_cash,De_cash;
	int n=2,i;

	Da_cash = 100 * 1.1;
	De_cash = 100 * 1.05;
	while (Da_cash > De_cash)
	{
		Da_cash = 100 +10*n;
		for (i = 1; i < n; i++)
			De_cash = 1.05*De_cash;
		n++;
	}

	printf("%f %f %d", Da_cash, De_cash, n);

	return 0;
}