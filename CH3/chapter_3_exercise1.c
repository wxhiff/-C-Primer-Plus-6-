#include<stdio.h>//�۲��������磬�������ϡ�����
int main(void)
{
	int a = 4294967296;//�ĸ��ֽڣ�2��32�η�Ϊ4294967296
	float b = 0.1234e20;
	b= b / 10;

	printf("��������%d", a);
	printf("����������%f", b);

	return 0;
}