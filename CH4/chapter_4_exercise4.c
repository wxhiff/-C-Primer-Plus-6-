#include<stdio.h>//��ʾ�û�������ߺ���������ʾ����
int main(void)
{
	char name[40];
	float height;

	printf("Please enter your height and name:\n");
	scanf_s("%s", name, 40);
	scanf_s("%f", &height);
	printf("%s,you are %f feet tall", name, height/2);

	return 0;
}