#include<stdio.h>//演示除法，整数除法和浮点数除法不同
int main(void)
{
	printf("integer division:5/4 is %f\n", 5. / 4);
	printf("integer division:6/3 is %f\n", 6 / 3);
	printf("integer division:7/4 is %d\n", 7 / 4);
	printf("floating division:7./4. is %d\n", 7. / 4.);
	printf("mixed division:7./4. is %1.2f\n", 7. / 4);

	return 0;
}