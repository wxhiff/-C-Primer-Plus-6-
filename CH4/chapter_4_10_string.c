#include<stdio.h>
#define BLURB "Authentic imitation"
int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);

	char NAME[40];//以下为练习，调试正确。
	float money;
	printf("Please enter your family name:\n");
	scanf_s("%s", NAME,40);
	printf("Please enter your property:\n");
	scanf_s("%f",&money);
	printf("The %s family just may be %f dollars richer",NAME, money);

	return 0;
}