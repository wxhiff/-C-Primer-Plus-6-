#include<stdio.h>//��ӡ2��ǰ8���ݡ�
int main(void)
{
	int i;
	int exp8_2[10];//����int��������

	for (i=1,exp8_2[0] = 1; i < 8; i++)
		exp8_2[i] = 2 * exp8_2[i-1];//ѭ��2��8����
	i = 0;
	do
	{
		printf("%d\n", exp8_2[i]);
		i++;
	} while (i < 8);

		return 0;
}