#include<stdio.h>//�����϶�ת���ɻ��϶ȺͿ��϶ȡ������Լ��ĺ���
void Temperatures(double tem);//����ԭ��������ת��������double���͵�����
const double C = 5.0 / 9.0;
const double K = 273.16;
int main(void)
{
	double tem;

	printf("The program converts Fahrenheit to Celsius and Kelvin temperature.\n");
	printf("Now,please enter Fahrenheit:\n");
	scanf_s("%lf", &tem);
	while (tem > 0)
	{
		Temperatures(tem);
		printf("Please enter next:\n");
		scanf_s("%lf", &tem);
	}

	return 0;
}

void Temperatures(double tem)
{
	double Celsius, Kelvin;
	Celsius = C * (tem - 32.0);
	Kelvin = Celsius + 273.16;
	printf("Celsius is %.2lf.Kelvin temperatures is %.2ldf\n", Celsius, Kelvin);
}