#include<stdio.h>//����ת��Ϊ���Ӻ���
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds(<=to quit):\n");//�˳�ѭ��������
	scanf_s("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;//ȡ������
		left = sec % SEC_PER_MIN;//ȡ����
		printf("%d seconds is %d minutes,%d seconds.\n", sec, min, left);//���
		printf("Enter next value(<= to quit):\n");
		scanf_s("%d",&sec);
	}
	printf("Done!\n");

	int a=11, b=-5;

	printf("%d", a %b);

	return 0;
}