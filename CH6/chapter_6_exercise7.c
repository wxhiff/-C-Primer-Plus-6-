#include<stdio.h>//����һ�����ʣ������ӡ����
int main(void)
{
	char voca[40];
	int length;

	printf("Entering a vocabuary.\n");
	scanf_s("%s", voca, 40);
	length = strlen(voca);
	do
	{
		printf("%c", voca[length]);
		length--;
	}
	while (length>=0);

	return 0;
}