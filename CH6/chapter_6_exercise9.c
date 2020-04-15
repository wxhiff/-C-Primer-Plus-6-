#include<stdio.h>//练习8的要求，但是要调用函数，学习函数调用，参数的传递
float res(float n1,float n2);//函数声明
int main(void)
{
	float con=0,n1,n2;

	printf("Please enter two numbers:\n");
	while(scanf_s("%f %f",&n1,&n2)==2)
	{
		//n = res(n1,n2);
		printf("%.4f\n", res(n1, n2));//调用函数
	}

	return 0;
}

float res(float n1,float n2)
{
	float con;

	con = (float)(n1 - n2) / (n1*n2);
	printf("Entering q to quit,otherwise contiune:\n");
	//scanf_s("%f %f", &n1, &n2);
		
	return con;//返回值
}