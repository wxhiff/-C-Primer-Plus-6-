#include<stdio.h>//��ϰ8��Ҫ�󣬵���Ҫ���ú�����ѧϰ�������ã������Ĵ���
float res(float n1,float n2);//��������
int main(void)
{
	float con=0,n1,n2;

	printf("Please enter two numbers:\n");
	while(scanf_s("%f %f",&n1,&n2)==2)
	{
		//n = res(n1,n2);
		printf("%.4f\n", res(n1, n2));//���ú���
	}

	return 0;
}

float res(float n1,float n2)
{
	float con;

	con = (float)(n1 - n2) / (n1*n2);
	printf("Entering q to quit,otherwise contiune:\n");
	//scanf_s("%f %f", &n1, &n2);
		
	return con;//����ֵ
}