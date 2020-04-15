#include<stdio.h>//ÊäÈëASCIIÂë£¬Êä³ö´òÓ¡×Ö·û
int main(void)
{
	int  a;

	printf("Please enter an ASCII value:");
	scanf_s("%d",&a);
	printf("The ASCII is£º%c", a);

	return 0;
}