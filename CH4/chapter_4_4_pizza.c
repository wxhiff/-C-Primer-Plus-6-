#include<stdio.h>
#define PI 3.1415926
int main(void)
{
	float area, circum, radius;

	printf("What is the radius of your pizza?\n");
	scanf_s("%f", &radius);
	area = PI * radius*radius;
	circum = 2.0*PI*radius;
	printf("Your basic pizza parameters are follows:\n");
	printf("circumference=%5.4f,area=%5.4f\n", circum, area);

	return 0;
}