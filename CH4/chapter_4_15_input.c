#include<stdio.h>//scanf_s()函数中两条基本的规则示例
int main(void)
{
	int age;
	float assets;
	char pet[30];

	printf("Enter your age,assets,and favorte pet.\n");
	scanf_s("%d %f", &age, &assets);
    scanf_s("%s",pet,30);
	printf("%d $%.2f %s\n", age, assets, pet);

	return 0;
}