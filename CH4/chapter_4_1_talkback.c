#include<stdio.h>//��ʾ���û�����
#include<string.h>//�ṩstrlrn()����ԭ��
#define DENSITY 62.4//�����ܶȣ���λ����/����Ӣ�ߣ�
int main()
{
	float weight, volume;
	int size, letters;
	char name[40];//������40���ַ�������

	printf("Hi!What's your first name?\n");
	scanf_s("%s", name,40);
	printf("%s,What's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well,%s,yoor volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it.\n", size);

	return 0;
}