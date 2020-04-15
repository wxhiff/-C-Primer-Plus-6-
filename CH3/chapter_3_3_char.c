#include<stdio.h>//验证转义符的输出
int main(void)
{
	//printf("Gramps sez ,\"a \\is a backlash.\"\n");
	char beep;
	printf("Hello!\007\n");
	beep = '007';
	return 0;
}