#include<stdio.h>//����һ����������ӡ��������ִ�10��������������������
int main(void)
{
	int num,nnum;

	printf("Please enter a integer:  ");
	scanf_s("%d", &num);
	nnum = num + 10;
	printf("%d\n", num);
	while (num++ < nnum )
	{
		printf("%d\n", num);

	}
	return 0;
}