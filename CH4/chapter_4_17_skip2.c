#include<stdio.h>//scanf_s()������*���η���ʹ��ʾ��
int main(void)
{
	int n;

	printf("Please enter three integers:\n");
	scanf_s("%*d %*d %d", &n);
	printf("The last integer was %d\n",n);

	return 0;
}//����Ϊ���������е�ǰ��������